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
	void dfs(T src){
		map<T, bool> visited;
		dfs_helper(src, visited);
		cout<<endl;
	}
	int count_component(){
		int count = 0;
		map<T, bool> visited;
		for(auto node_pair: umap){
			if(!visited[node_pair.first]){
				count++;
				dfs_helper(node_pair.first, visited);
				cout<<endl;
			}
		}
		return count;
	}
};
int main(){
	graph<int> g;
	g.add_edge(0, 4);
	g.add_edge(0, 1);
	g.add_edge(1, 2);
	g.add_edge(3, 2);
	g.add_edge(3, 4);
	g.add_edge(3, 5);
	g.add_edge(6, 7);
	g.add_edge(8, 9);
	g.add_edge(8, 10);
	g.add_edge(9, 10);
	// g.dfs(0);
	cout<<"number of components: "<<g.count_component()<<endl;
	return 0;
}