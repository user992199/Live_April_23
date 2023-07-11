#include<iostream>
#include<list>
#include<unordered_map>
#include<map>
#include<cstring>
#include<queue>
using namespace std;
template <typename T>
class graph{
	map<T, list<T>> umap;
public:
	void add_edge(T u, T v, bool bidirectional = true){
		umap[u].push_back(v);
		if(bidirectional){
			umap[v].push_back(u);
		}
	}
	void add_vertex(T u){
		umap[u];
	}
	void print(){
		for(auto p: umap){
			cout<<p.first<<":\t";
			for(auto n: p.second){
				cout<<n<<"\t";
			}cout<<endl;
		}
	}
	void dfs_helper(T src, map<T, bool> &visited){
		// if(visited[src]) return;
		visited[src] = true;
		cout<<src<<" ";
		for(auto neighbour: umap[src]){
			if(!visited[neighbour]){
				dfs_helper(neighbour, visited);
			}
		}
	}
	bool cycle_helper(T src, T parent, map<T, bool> & visited){
		visited[src] = true;
		for(auto neighbour: umap[src]){
			if(visited[neighbour]){
				if(neighbour != parent) return true;
			}else{
				if(cycle_helper(neighbour, src, visited)) return true;
			}
		}
		return false;
	}
	bool cycle_detect(){
		map<T, bool> visited;
		for(auto node_pair: umap){
			T src = node_pair.first;
			if(!visited[src]){
				if(cycle_helper(src, src, visited)) return true;
			}
		}
		return false;
	}
};
int main(){
	graph<int> g;
	// g.add_edge(0, 4);
	g.add_edge(0, 1);
	g.add_edge(1, 2);
	g.add_edge(3, 2);
	g.add_edge(4, 2);
	// g.add_edge(3, 4);
	g.add_edge(3, 5);
	g.add_edge(6, 7);
	g.add_edge(8, 9);
	g.add_edge(8, 10);
	// g.add_edge(9, 10);
	g.cycle_detect() ? cout<<"Cycle\n" : cout<<"Not Cycle\n";
	return 0;
}