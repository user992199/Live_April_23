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
node * k_reverse(node * head, int k){
	// base case
	if(!head) return head;
	// reverse first k nodes
	node * prev = 0, * curr = head, * nxt_node = head;
	int i = 1;
	while(nxt_node and i <= k){
		nxt_node = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = nxt_node;
		i++;
	}
	// recursive case
	// head -> next = k_reverse(nxt_node, k);
	// head -> next = nxt_node;
	// k_reverse(head -> next, k);
	// head = prev;
	node * head_of_aage_waali_ll = k_reverse(nxt_node, k);
	head -> next = head_of_aage_waali_ll;
	head = prev;
	return prev;
}
int main(){
	node * head = 0;
	for(int i = 1; i <= 12; i++){
		insert_at_end(head, i);
	}
	print_ll(head);
	head = k_reverse(head, 3);
	print_ll(head);
	return 0;
}