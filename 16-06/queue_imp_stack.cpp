#include<iostream>
#include<stack>
using namespace std;
class Queue{
	stack<int> s1;
public:
	void push(int data){
		stack<int> s2;
		// step 1
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		// step 2
		s1.push(data);
		// step 3
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
	}
	void push_rec(int data){ // logic is same as insert at bottom
		if(s1.size() == 0){
			s1.push(data);
			return;
		}
		int te = s1.top();
		s1.pop();
		push_rec(data);
		s1.push(te);
	}
	void pop(){
		s1.pop();
	}
	int front(){
		return s1.top();
	}
	int size(){
		return s1.size();
	}
	bool empty(){
		return s1.empty();
	}
};
int main(){
	Queue q;
	for(int i = 0; i < 17; i++){
		// q.push_rec(i+1);
		q.push(i+1);
		cout<<i+1<<" ";
	}
	cout<<endl;
	cout<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}