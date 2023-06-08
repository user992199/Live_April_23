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
	// print_ll(head);
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
	// print_ll(head);
}
void reverse_ll(node * &head){
	node * prev = 0;
	node * curr = head;
	node * nxt_node = head;
	while(nxt_node){
		nxt_node = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = nxt_node;
	}
	head = prev;
}
int main(){
	node * head = 0;
	insert_at_end(head, 1);
	insert_at_end(head, 2);
	insert_at_end(head, 3);
	insert_at_end(head, 4);
	insert_at_end(head, 5);
	print_ll(head);
	reverse_ll(head);
	print_ll(head);
	return 0;
}