#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class node{
public:
	T data;
	node * next;
	node(T data){
		this -> data = data;
		next = 0;
	}
};
template <typename T>
class Stack{
	node<T> * head;
	int n;
public:
	Stack(){
		head = 0;
		n = 0;
	}
	// push
	void push(T data){
		node <T>* temp = new node<T>(data);
		temp -> next = head;
		head = temp;
		n++;
	}
	// pop
	void pop(){
		if(!head) return;
		auto temp = head;
		head = head -> next;
		delete temp;
		n--;
	}
	// top
	T top(){
		return head -> data;
	}
	// empty
	bool empty(){
		return head == 0;
	}
	// size
	int size(){
		return n;
	}
	// clear
	void clear(){
		while(head){
			auto temp = head;
			head = head -> next;
			delete temp;
		}
		n = 0;
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