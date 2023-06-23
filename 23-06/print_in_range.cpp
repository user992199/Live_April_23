#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node(int data): data(data), left(0), right(0){}
};
void insert_node(node * &root, int n){
	if(!root){
		root = new node(n);
		return;
	}
	n <= root -> data ? 
		insert_node(root -> left, n) : 
		insert_node(root -> right, n);
	// if(n <= root -> data){
	// 	insert_node(root -> left, n);
	// }else if(n >= root -> data){
	// 	insert_node(root -> right, n);
	// }
}
void create_bst(node *&root){
	int input;
	cin>>input;
	while(input != -1){
		insert_node(root, input);
		cin>>input;
	}
}
void inorder(node * root){
	if(!root) return;
	inorder(root -> left);
	cout<<root -> data<<" ";
	inorder(root -> right);
}
void print_range(node * root, int k1, int k2){
	if(!root) return;
	if(root -> data >= k1)
		print_range(root -> left, k1, k2);
	if(root -> data <= k2 and root -> data >= k1)
		cout<<root -> data<<" ";
	if(root -> data <= k2)
		print_range(root -> right, k1, k2);
}
int main(){
	node * root = 0;
	create_bst(root);
	print_range(root, 5, 10);
	return 0;
}