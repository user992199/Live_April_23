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
node * find_mid_2(node * head){
	if(!head) return head;
	node * fast = head, * slow = head;
	while(fast -> next and fast -> next -> next){
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	return slow;
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

bool check_palindrome(node * head){
	// find mid
	node * mid = find_mid_2(head);
	// create 2nd half
	node * head2 = mid -> next;
	mid -> next = 0;
	// reverse 2nd half
	reverse_ll(head2);
	// compare both the halves
	bool ans = true;
	node * t1 = head, * t2 = head2;
	while(t1 and t2){
		if(t1 -> data != t2 -> data){
			ans = false;
			break;
		}
		t1 = t1 -> next;
		t2 = t2 -> next;
	}
	// backtrack your changes
	reverse_ll(head2);
	mid -> next = head2;
	// return ans
	return ans;
}

int main(){
	node * head = 0;
	int n = 6;
	for(int i = 0; i < n; i++){
		insert_at_end(head, i);
	}
	for(int i = n-2; i >= 0; i--){
		insert_at_end(head, i);
	}
	// print_ll(head);
	if(check_palindrome(head)){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	print_ll(head);
	return 0;
}