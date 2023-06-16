#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int> q1, q2;
public:
	void push(int data){
		if(q1.empty()){ // agar q1 khali hai, q2 mein data ho skta hai
			// step 1
			q1.push(data);
			// step 2
			while(!q2.empty()){
				q1.push(q2.front());
				q2.pop();
			}
		}else{
			// step 1
			q2.push(data);
			// step 2
			while(!q1.empty()){
				q2.push(q1.front());
				q1.pop();
			}
		}
	}
	void pop(){
		if(!q1.empty()) q1.pop();
		if(!q2.empty()) q2.pop();
	}
	int top(){
		if(!q1.empty()) return q1.front();
		if(!q2.empty()) return q2.front();
		return -1;
	}
	int size(){
		return max(q1.size(), q2.size());
	}
	bool empty(){
		return q1.empty() and q2.empty();
	}
};
int main(){
	Stack s;
	int n = 11;
	for(int i = 0; i < n; i++){
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