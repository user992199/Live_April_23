#include<iostream>
#include<unordered_map>
using namespace std;
template <typename T>
class disjoint_set{
	unordered_map<T, T> parent;
	// number of element in this set
	// this set here mean
	// the set of which the current key is leader/parent of
	unordered_map<T, int> rank;
public:
	void create_set(T n){
		parent[n] = n;
		rank[n] = 1;
	}
	T find_set(T u){ // find parent 
		// base case
		if(parent[u] == u){
			return u;
		}
		// recursive case
		return parent[u] = find_set(parent[u]); // path compression
	}
	void union_set(T u, T v){
		T l_u = find_set(u);
		T l_v = find_set(v);
		if(l_u != l_v){
			int r_u = rank[l_u];
			int r_v = rank[l_v];
			if(r_u >= r_v){
				parent[l_v] = l_u;
				rank[l_u] += rank[l_v];
			}
			else{
				parent[l_u] = l_v;
				rank[l_v] += rank[l_u];
			}
		}
	}
};
int main(){
	disjoint_set<int> ds;
	ds.create_set(1);
	ds.create_set(2);
	ds.create_set(3);
	ds.create_set(4);
	cout<<ds.find_set(3)<<endl;
	ds.union_set(2, 3);
	ds.union_set(1, 2);
	cout<<ds.find_set(3)<<endl;
	// cout<<ds.parent[3]<<endl;
	return 0;
}