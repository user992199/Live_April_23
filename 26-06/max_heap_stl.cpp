#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int> h;
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