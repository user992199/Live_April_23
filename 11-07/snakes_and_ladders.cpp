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
		for(auto n: umap){
			visited[n.first] = false;
		}
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
	void sssp(T src, T v){
		map<T, bool> visited;
		visited[src] = true;
		queue<T> q;
		q.push(src);
		map<T, T> parent;
		parent[src] = src;
		map<T, int> distance;
		distance[src] = 0;
		while(q.size()){
			T curr_node = q.front();
			q.pop();
			for(auto neighbour: umap[curr_node]){
				if(!visited[neighbour]){
					visited[neighbour] = true;
					q.push(neighbour);
					parent[neighbour] = curr_node;
					distance[neighbour] = distance[curr_node] + 1;
				}
			}
		}
		// for(auto node: distance){
		// 	cout<<node.first<<" : "<<node.second<<endl;
		// }
		T cn = v;
		while(cn != parent[cn]){
			cout<<cn<<" <- ";
			cn = parent[cn];
		}
		cout<<src<<endl;
	}
};
int main(){
	graph<int> g;
	int dest = 36;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]= -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;
	for(int i = 0; i < dest; i++){
		if(board[i]) continue;
		for(int j = 1; j <= 6 and i + j <= 36; j++){
			g.add_edge(i, i + j + board[i+j], false);
		}
	}
	g.sssp(0, dest);
	return 0;
}