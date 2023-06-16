#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int> q;
	void reverse(){
		if(q.empty()) return;
		int fe = q.front();
		q.pop();
		reverse();
		q.push(fe);
	}
public:
	void push(int data){
		reverse();
		q.push(data);
		reverse();
	}
	void pop(){
		q.pop();
	}
	int top(){
		return q.front();
	}
	int size(){
		return q.size();
	}
	bool empty(){
		return q.empty();
	}
};
int main(){
	Stack s;
	for(int i = 0; i < 11; i++){
		s.push(i+1);
		cout<<i+1<<" ";	
	}
	cout<<endl;
	cout<<s.size()<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}