#include<iostream>
#include<stack>
using namespace std;
class min_stack{
	stack<int> og; // original/main stack
	stack<int> ms;
public:
	void push(int data){
		og.push(data);
		if(ms.empty() or data <= ms.top()){
			ms.push(data);
		}
	}
	void pop(){
		if(og.empty()) return;
		if(og.top() == ms.top()){
			ms.pop();
		}
		og.pop();
	}
	int min(){
		return ms.empty() ? -1 : ms.top();
	}
	int top(){	
		return og.empty() ? -1 : og.top();
	}
	bool empty(){
		return og.empty();
	}
	int size(){
		return og.size();
	}
};
int main(){
	min_stack s;
	s.push(3);
	s.push(5);
	s.push(2);
	s.push(2);
	s.push(4);
	s.push(1);
	while(!s.empty()){
		cout<<"top: "<<s.top()<<"; min: "<<s.min()<<endl;
		s.pop();
	}
	return 0;
}