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
node * find_mid_1(node * head){
	int n = count_node_ll(head);
	for(int i = 0; i < (n-1)/2; i++){
		head = head -> next;
	}
	return head;
}
node * find_mid_2(node * head){
	if(!head) return head;
	node * fast = head, * slow = head;
	while(fast -> next and fast -> next -> next){
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	return slow;
}
node * merge_2_ll(node * h1, node * h2){
	node * head = NULL;
	node * temp = 0;
	if(h1 -> data < h2 -> data){
		temp = head = h1;
		h1 = h1 -> next;
	}else{
		temp = head = h2;
		h2 = h2 -> next;
	}
	while(h1 and h2){
		if(h1 -> data < h2 -> data){
			temp = temp -> next = h1;
			h1 = h1 -> next;
		}else{
			temp = temp -> next = h2;
			h2 = h2 -> next;
		}
	}
	if(h1) temp -> next = h1;
	if(h2) temp -> next = h2;
	h1 = h2 = head;
	return head;
}
node * merge_sort(node * head){
	// base case
	if(head -> next == NULL) return head;
	// divide
	node * mid = find_mid_2(head);
	node * h2 = mid -> next;
	mid -> next = 0;
	// sort
	head = merge_sort(head);
	h2 = merge_sort(h2);
	// merge
	head = merge_2_ll(head, h2);
	return head;
}
int main(){
	node * head = 0;
	int n = 10;
	for(int i = n; i > 0; i--){
		insert_at_end(head, i);
	}
	print_ll(head);
	head = merge_sort(head);
	print_ll(head);
	return 0;
}