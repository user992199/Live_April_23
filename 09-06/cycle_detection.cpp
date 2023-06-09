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
node * linear_search_ll(node * head, int key){
	while(head and head -> data != key){
		// if(head -> data == key) return head;
		head = head -> next;
	}
	return head;
}
bool cycle_detect(node * head){
	node * fast = head;
	node * slow = head;
	while(fast and fast -> next){
		fast = fast -> next -> next;
		slow = slow -> next;
		if(fast == slow){
			return true;
		}
	}
	return false;
}
void create_cycle(node * &head){
	node * tail = find_last_node(head);
	tail -> next = head -> next -> next;
}
int main(){
	node * head = 0;
	int n = 10;
	for(int i = 0; i < n; i++){
		insert_at_end(head, i+1);
	}
	create_cycle(head);
	// print_ll(head);
	cycle_detect(head) ? cout<<"Cycle is there\n" : cout<<"No Cycle\n";
	return 0;
}