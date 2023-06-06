#include<iostream>
using namespace std;
// node class here is an 
// example of self referencing class
class node{
public:
	int data;
	node * next;
	node(const int data){
		// this keyword
		this -> data = data;
		next = NULL;
	}
};
void print_ll(node * head){
	while(head != NULL){
		cout<<head -> data<<" -> ";
		head = head -> next;
	}
	cout<<"NULL\n";
}
void insert_at_begin(node * &head, int data){
	print_ll(head);
	// Create a new element/node
	node * temp = new node(data);
	// Point to the old first element from the new element 
	temp -> next = head;
	// Point to the new element from the head pointer
	head = temp;
}
int main(){
	node * head = 0;
	// cout<< &head << endl;
	insert_at_begin(head, 1);
	insert_at_begin(head, 2);
	insert_at_begin(head, 3);
	insert_at_begin(head, 4);
	insert_at_begin(head, 5);
	print_ll(head);
	// cout<< head << endl;
	cout<< head -> data << endl;
	cout<< head -> next -> data << endl;
	return 0;
}