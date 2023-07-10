#include<iostream>
#include<list>
#include<unordered_map>
#include<map>
using namespace std;
class graph{
	// unordered_map<int, list<int>> umap;
	map<int, list<int>> umap;
public:
	void add_edge(int u, int v, bool bidirectional = true){
		umap[u].push_back(v);
		if(bidirectional){
			umap[v].push_back(u);
		}
	}
	void print(){
		for(auto p: umap){
			cout<<p.first<<": ";
			for(auto n: p.second){
				cout<<n<<" ";
			}cout<<endl;
		}
	}
};
int main(){
	graph g;
	g.add_edge(0, 4);
	g.add_edge(1, 3);
	g.add_edge(1, 4);
	g.add_edge(2, 3);
	g.add_edge(3, 4);
	g.add_edge(0, 1);
	g.add_edge(1, 2);
	g.print();
	return 0;
}