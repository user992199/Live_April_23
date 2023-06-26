#include<iostream>
#include<vector>
using namespace std;
class min_heap{
	vector<int> v;
	void heapify(int p){
		// finding left child and right child
		int lc = 2*p + 1, rc = 2*p + 2;
		int mi = p;
		// child should exist and child is min among the 3(p, lc, rc)
		// sabse chote element ka index mi mein store karliya
		if(lc < v.size() and v[lc] < v[mi]) mi = lc;
		if(rc < v.size() and v[rc] < v[mi]) mi = rc;
		// agar leaf node mill gya ya fir agar sabse chota parent hai
		if(mi == p) return;
		// agar koi child sabse chota hai
		swap(v[p], v[mi]);
		// jo parent neeche gya, i.e. jo parent abh child ban chuka hai
		// uske liye bhi HOP ko restore karo
		// ya fir uspe bhi heapify call kardo
		heapify(mi); 
	}
public:
	void push(int data){
		v.push_back(data);
		int c = v.size()-1;
		int p = (c-1)/2;
		while(v[c] < v[p] and c > 0){
			swap(v[c], v[p]);
			c = p;
			p = (c-1)/2;
		}
	}
	void pop(){
		swap(v[0], v[v.size()-1]);
		v.pop_back();
		heapify(0);
	}
	int top(){
		return v[0];
	}
	int size(){
		return v.size();
	}
	bool empty(){
		return v.empty();
	}
};
int main(){
	min_heap h;
	h.push(100);
	h.push(25);
	h.push(7);
	h.push(36);
	h.push(19);
	h.push(17);
	h.push(3);
	h.push(2);
	h.push(1);
	cout<<h.size()<<endl;
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;
	return 0;
}