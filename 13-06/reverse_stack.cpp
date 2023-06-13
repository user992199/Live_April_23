#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
	while(s.size()){ // !s.empty()
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
void push_bottom(stack<int> & s, int data){
	// base case
	if(s.size() == 0){
		s.push(data);
		return;
	}
	// recursive case
	int te = s.top();
	s.pop();
	push_bottom(s, data);
	s.push(te);
}
void reverse(stack<int> & s){
	// base case
	if(s.size() == 0){
		return;
	}
	// recursive case
	int te = s.top();
	s.pop();
	reverse(s);
	push_bottom(s, te);
}
int main(){
	stack<int> s;
	for(int i = 0; i < 5; i++){
		s.push(i+1);
	}
	print(s);
	reverse(s);
	print(s);
	return 0;
}