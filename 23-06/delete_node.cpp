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
node * delete_node(node * root, int key){
	if(!root) return 0;
	if(root -> data == key){
		if(!(root -> left) and !(root -> right)){
			delete root;
			return 0;
		}
		else if(root -> left and !(root -> right)){
			node * lc = root -> left;
			delete root;
			return lc;
		}
		else if(root -> right and !(root -> left)){
			node * rc = root -> right;
			delete root;
			return rc;
		}
		else{
			node * rm = find_min(root -> right);
			swap(root -> data, rm -> data);
			root -> right = delete_node(root -> right, key);
		}
	}else if(key < root -> data){
		root -> left = delete_node(root -> left, key);
	}else{
		root -> right = delete_node(root -> right, key);
	}
	return root;
}
int main(){
	node * root = 0;
	create_bst(root);
	cout<<find_min(root) -> data<<endl;
	return 0;
}