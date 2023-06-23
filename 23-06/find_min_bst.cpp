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
node * find_min(node * root){
	if(!root) return root;
	if(root -> left) return find_min(root -> left);
	return root;
}
int main(){
	node * root = 0;
	create_bst(root);
	cout<<find_min(root) -> data<<endl;
	return 0;
}