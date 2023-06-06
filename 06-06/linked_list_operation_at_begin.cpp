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
int count_node_ll(node * head){
	int count = 0;
	while(head){
		count++;
		head = head -> next;
	}
	return count;
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
void delete_from_begin(node * & head){
	print_ll(head);
	// if(head == NULL) return;
	if(!head) return;
	// create a temp pointer so that 
	// we wont lost the first node
	node * temp = head;
	// set the second node as the new head of LL
	head = head -> next;
	// finally delete the original first node
	// to avoid memory leak
	delete temp;
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
	cout<<"Number of nodes: "<<count_node_ll(head)<<endl;
	delete_from_begin(head);
	delete_from_begin(head);
	delete_from_begin(head);
	delete_from_begin(head);
	delete_from_begin(head);
	delete_from_begin(head);
	print_ll(head);
	cout<<"Number of nodes: "<<count_node_ll(head)<<endl;
	// cout<< head << endl;
	// cout<< head -> data << endl;
	// cout<< head -> next -> data << endl;
	return 0;
}