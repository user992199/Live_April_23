#include<iostream>
#include<list>
using namespace std;
class graph{
	list<int> * arr;
	int v;
public:
	graph(int v = 5){
		this -> v = v;
		arr = new list<int>[v];
	}
	void add_edge(int u, int v, bool bidirectional = true){
		arr[u].push_back(v);
		if(bidirectional){
			arr[v].push_back(u);
		}
	}
	void print(){
		for(int i = 0; i < v; i++){
			cout<<i<<": ";
			for(int n: arr[i]){
				cout<<n<<" ";
			}cout<<endl;
		}
	}
};
int main(){
	graph g;
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(1, 2);
	g.add_edge(1, 3);
	g.add_edge(1, 4);
	g.add_edge(2, 3);
	g.add_edge(3, 4);
	g.print();
	return 0;
}