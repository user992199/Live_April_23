#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node * next;
	node(int data): data(data), left(0), right(0), next(0){}
};
void insert_node(node * &root, int n){
	if(!root){
		root = new node(n);
		return;
	}
	n <= root -> data ? 
		insert_node(root -> left, n) : 
		insert_node(root -> right, n);
}
void create_bst(node *&root){
	int input;
	cin>>input;
	while(input != -1){
		insert_node(root, input);
		cin>>input;
	}
}
class pair_ll{
public:
	node * head, * tail;
	pair_ll(node * h = 0, node * t = 0) : head(h), tail(t){}
};
pair_ll convert_bst_to_ll(node * root){
	if(!root) return pair_ll(0, 0);
	// convert_bst_to_ll(root -> left);
	pair_ll left = convert_bst_to_ll(root -> left);
	// connect root with left subtree's linked list
	pair_ll ans(0, 0);
	if(left.head != 0){
		left.tail -> next = root;
		ans.head = left.head;
	}else ans.head = root;
	// convert_bst_to_ll(root -> right);
	pair_ll right = convert_bst_to_ll(root -> right);
	// connect root with right subtree's linked list
	if(right.head != 0){
		root -> next = right.head;
		ans.tail = right.tail;
	}else ans.tail = root;
	// return ans; // ya fir uska head + tail ka pair
	return ans;
}
void print_ll(node * head){
	while(head){
		cout<<head -> data<<" ";
		head = head -> next;
	}
	cout<<endl;
}
int main(){
	node * root = 0;
	create_bst(root);
	node * head = convert_bst_to_ll(root).head;
	print_ll(head);
	return 0;
}