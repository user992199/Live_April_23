#include<iostream>
#include<queue>
using namespace std;
int main(){
	/*
	syntax
	priority_queue<datatype, container, greater<datatype>> identifier;
	*/
	priority_queue<int, vector<int>, greater<int>> h;
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