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
	void bfs(T src){
		map<T, bool> visited;
		// for(auto n: umap){
		// 	visited[n.first] = false;
		// }
		visited[src] = true;
		queue<T> q;
		q.push(src);
		while(q.size()){
			T curr_node = q.front();
			q.pop();
			cout<<curr_node<<" ";
			for(auto neighbour: umap[curr_node]){
				if(!visited[neighbour]){
					visited[neighbour] = true;
					q.push(neighbour);
				}
			}
		}
		cout<<endl;
	}
};
int main(){
	graph<string> g;
	g.add_edge("Zero", "Four");
	g.add_edge("Zero", "One");
	g.add_edge("One", "Two");
	g.add_edge("Three", "Two");
	g.add_edge("Three", "Four");
	g.add_edge("Three", "Five");
	g.bfs("Five");
	return 0;
}