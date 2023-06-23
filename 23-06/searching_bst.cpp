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
node * search(node * root, int k){
	if(!root or root -> data == k) return root;
	// if(k <= root -> data) return search(root -> left, k);
	// else return search(root -> right, k);
	return k <= root -> data ? 
		search(root -> left, k) : 
		search(root -> right, k);
}
void inorder(node * root){
	if(!root) return;
	inorder(root -> left);
	cout<<root -> data<<" ";
	inorder(root -> right);
}
int main(){
	node * root = 0;
	create_bst(root);
	int key = 1;
	node * na = search(root, key);
	na ? cout<<na -> data<<endl : cout<<na<<endl;
	inorder(root);
	return 0;
}