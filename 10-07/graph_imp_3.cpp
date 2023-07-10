#include<iostream>
#include<list>
#include<unordered_map>
#include<map>
#include<cstring>
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
};
int main(){
	graph<string> g;
	g.add_edge("Zero", "Four");
	g.add_edge("One", "Three");
	g.add_edge("One", "Four");
	g.add_edge("Two", "Three");
	g.add_edge("Three", "Four");
	g.add_edge("Zero", "One");
	g.add_edge("One", "Two");
	g.add_edge("One", "Six", false);
	g.add_vertex("Six");
	g.print();
	return 0;
}