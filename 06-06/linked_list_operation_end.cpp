#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(const int data){
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
	node * temp = new node(data);
	temp -> next = head;
	head = temp;
}
void delete_from_begin(node * & head){
	print_ll(head);
	if(!head) return;
	node * temp = head;
	head = head -> next;
	delete temp;
}
node * find_last_node(node * head){
	if(!head) return 0;
	while(head -> next){
		head = head -> next;
	}
	return head;
}
void insert_at_end(node * &head, int data){
	if(head == NULL){
		head = new node(data);
	}
	else{
		node * tail = find_last_node(head);
		tail -> next = new node(data);
	}
	print_ll(head);
}
void delete_from_end(node * & head){
	if(!head){
		cout<<"NULL\n";
		return;
	}
	else if(head -> next == NULL){
		delete head;
		head = NULL;
	}
	else{
		node * SL = head;
		while(SL -> next -> next){
			SL = SL -> next;
		}
		delete SL -> next;
		SL -> next = 0;
	}
	print_ll(head);
}
int main(){
	node * head = 0;
	insert_at_end(head, 1);
	insert_at_end(head, 2);
	insert_at_end(head, 3);
	insert_at_end(head, 4);
	insert_at_end(head, 5);
	delete_from_end(head);
	delete_from_end(head);
	delete_from_end(head);
	delete_from_end(head);
	delete_from_end(head);
	return 0;
}