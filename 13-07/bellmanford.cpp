#include<iostream>
#include<list>
#include<unordered_map>
#include<map>
#include<cstring>
#include<utility>
#include<climits>
#include<set>
#include<vector>
using namespace std;
template <typename T>
class edge{
public:
	T u;
	T v;
	int weight;
	edge(T u, T v, int w):u(u), v(v), weight(w){}
};
template <typename T>
class graph{
	set<T> vertices;
	vector<edge<T>> edge_list;
public:
	void add_edge(T u, T v, int weight){
		edge_list.push_back(edge<T>(u, v, weight));
		vertices.insert(u);
		vertices.insert(v);
	}
	void bellmanford(T src){
		map<T, int> dist;
		int num_of_ver = vertices.size();
		for(auto vertex: vertices){
			dist[vertex] = INT_MAX;
		}
		dist[src] = 0;
		for(int i = 0; i < num_of_ver-1; i++){
			for(auto edge: edge_list){
				if(dist[edge.u] != INT_MAX)
					dist[edge.v] = min(dist[edge.v], dist[edge.u] + edge.weight);				
			}
		}
		for(auto edge: edge_list){
			if(dist[edge.v] > dist[edge.u] + edge.weight){
				cout<<"Negative Cycle is there\n";
				return;
			}
		}
		for(auto node_pair: dist){
			cout<<node_pair.first<<" "<<node_pair.second<<endl;
		}
	}
};
int main(){
	graph<string> g;
	g.add_edge("1", "2", 2);
	g.add_edge("1", "3", 3);
	// g.add_edge("2", "3", 1);
	g.add_edge("3", "4", 2);
	g.add_edge("4", "2", -4);
	g.bellmanford("1");
	return 0;
}