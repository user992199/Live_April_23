#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class Stack{
	vector<T> v;
public:
	// push
	void push(T data){
		v.push_back(data);
	}
	// pop
	void pop(){
		v.pop_back();
	}
	// top
	T top(){
		return v.back();
	}
	// empty
	bool empty(){
		return v.empty();
	}
	// size
	int size(){
		return v.size();
	}
	// clear
	void clear(){
		v.clear();
	}
};
int main(){
	Stack<int> s;
	for(int i = 0; i < 5; i++){
		cout<<i+1<<" ";
		s.push(i+1);
	}
	cout<<endl;
	s.clear();
	while(s.size()){ // !s.empty()
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}