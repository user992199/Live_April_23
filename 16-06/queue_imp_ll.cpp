#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(int data, node * next = NULL){
		this -> data = data;
		this -> next = next;
	}
};
class Queue{
	node * head, * tail;
	int n;
public:
	Queue(){
		n = 0;
		head = tail = 0;
	}
	void push(int data){
		if(head == 0){
			tail = head = new node(data, head); // insertion at begin or end
		}
		else{
			tail -> next = new node(data);
			tail = tail -> next;
		}
		n++;
	}
	void pop(){
		if(head == 0) return;
		if(head == tail) tail = 0;
		node * temp = head;
		head = head -> next;
		delete temp;
		n--;
	}
	int front(){
		return head ? head -> data : -1;
	}
	int size(){
		return n;
	}
	bool empty(){
		return n == 0;
	}
};
int main(){
	Queue q;
	for(int i = 0; i < 17; i++){
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