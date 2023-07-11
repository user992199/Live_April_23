#include<iostream>
#include<list>
#include<unordered_map>
#include<map>
#include<cstring>
#include<queue>
#include<utility>
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
	void bfs(T src){
		map<T, bool> visited;
		// for(auto n: adj_list){
		// 	visited[n.first] = false;
		// }
		visited[src] = true;
		queue<T> q;
		q.push(src);
		while(q.size()){
			T curr_node = q.front();
			q.pop();
			cout<<curr_node<<" ";
			for(auto neighbour: adj_list[curr_node]){
				if(!visited[neighbour.first]){
					visited[neighbour.first] = true;
					q.push(neighbour.first);
				}
			}
		}
		cout<<endl;
	}
	void dfs_helper(T src, map<T, bool> &visited){
		visited[src] = true;
		cout<<src<<" ";
		for(auto neighbour: adj_list[src]){
			if(!visited[neighbour.first]){
				dfs_helper(neighbour.first, visited);
			}
		}
	}
	void dfs(T src){
		map<T, bool> visited;
		dfs_helper(src, visited);
		cout<<endl;
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
	// g.print();
	g.bfs("Delhi");
	g.dfs("Delhi");
	return 0;
}