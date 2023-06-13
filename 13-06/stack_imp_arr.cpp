#include<iostream>
using namespace std;
template <typename T>
class Stack{
	T * arr;
	int cap;
	int t;
public:
	Stack(int size = 10){
		cap = size;
		arr = new T[cap];
		t = -1;
	}
	// push
	void push(T data){
		if(t == cap-1){
			cout<<"Stack Overflow\n";
			return;
		}
		// t++;
		arr[++t] = data;
	}
	// pop
	void pop(){
		if(t == -1){
			cout<<"Stack Underflow\n";
			return;
		}
		t--;
	}
	// top
	T top(){
		return arr[t];
	}
	// empty
	bool empty(){
		return t == -1;
	}
	// size
	int size(){
		return t + 1;
	}
	// clear
	void clear(){
		t = -1;
	}
};
int main(){
	Stack<int> s;
	for(int i = 0; i < 5; i++){
		cout<<i+1<<" ";
		s.push(i+1);
	}
	cout<<endl;
	while(s.size()){ // !s.empty()
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}