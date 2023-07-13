#include<iostream>
#include<list>
#include<unordered_map>
#include<map>
#include<cstring>
#include<queue>
#include<utility>
#include<climits>
#include<set>
using namespace std;
template <typename T>
class graph{
	map<T, list<pair<T, int>>> adj_list;
public:
	void add_edge(T u, T v, int weight, bool bidirectional = true){
		adj_list[u].push_back({v, weight});
		if(bidirectional){
			adj_list[v].push_back({u, weight});
		}
	}
	void print(){
		for(auto p: adj_list){
			cout<<p.first<<":\t";
			for(auto n: p.second){
				cout<<"("<<n.first<<", "<<n.second<<")"<<"\t";
			}cout<<endl;
		}
	}
	void djikstra(T src){
		// this map will store the distance of every node from the source
		map<T, int> dist;
		for(auto node_pair: adj_list){
			dist[node_pair.first] = INT_MAX;
		}
		// this set will also store only the curr min dist of node from source
		set<pair<int, T>> s;
		dist[src] = 0;
		s.insert({0, src});
		while(!s.empty()){
			// first pair nikalo set se
			auto node_pair = *s.begin();
			T node = node_pair.second;
			dist[node] = node_pair.first; // optional
			s.erase(s.begin());
			// first node ke saare neighbours ka min distance evaluate karo
			for(auto neighbour_pair : adj_list[node]){
				// agar kisi neighbour ke liye shorter path milla,
				// to usse set mein update/insert karo
				T neighbour = neighbour_pair.first;
				int node_neigh_dist = neighbour_pair.second;
				int src_neigh_dist = dist[node] + node_neigh_dist;
				// check karo ki kya neighbour already set mein hai?
				auto neighbour_address = s.find({dist[neighbour], neighbour});
				if(neighbour_address != s.end()){ // neighbour found
					if(dist[neighbour] > src_neigh_dist){
						dist[neighbour] = src_neigh_dist;
						s.erase(neighbour_address);
						s.insert({dist[neighbour], neighbour});
					}
				}
				else if(dist[neighbour] == INT_MAX){
					dist[neighbour] = src_neigh_dist;
					s.insert({dist[neighbour], neighbour});
				}
			}
		}
		for(auto node_pair: dist){
			cout<<node_pair.first<<" "<<node_pair.second<<endl;
		}
	}
};
int main(){
	graph<string> g;
	g.add_edge("Delhi", "Agra", 1);
	g.add_edge("Amritsar", "Agra", 1);
	g.add_edge("Bhopal", "Agra", 2);
	g.add_edge("Bhopal", "Mumbai", 3);
	g.add_edge("Delhi", "Jaipur", 2);
	g.add_edge("Mumbai", "Jaipur", 8);
	g.add_edge("Amritsar", "Jaipur", 4);
	g.djikstra("Jaipur");
	return 0;
}