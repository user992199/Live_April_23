#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node(int data): data(data), left(0), right(0){}
};
node * create_bt(){
	int data;
	cin>>data;
	// base case
	if(data == -1){
		return NULL;
	}
	node * root = new node(data);
	// recursive case
	root -> left = create_bt();
	root -> right = create_bt();
	return root;
}
void preorder(node * root){
	// base case
	if(!root) return;
	// recursive case
	// root node
	cout<<root -> data<<" ";
	// left subtree
	preorder(root -> left);
	// right subtree
	preorder(root -> right);
}
void inorder(node * root){
	if(!root) return;
	inorder(root -> left);
	cout<<root -> data<<" ";
	inorder(root -> right);
}
void postorder(node * root){
	if(!root) return;
	postorder(root -> left);
	postorder(root -> right);
	cout<<root -> data<<" ";
}
int main(){
	node * root = 0;
	root = create_bt();
	cout<<"Preorder: "; preorder(root); cout<<endl;
	cout<<"Inorder: "; inorder(root); cout<<endl;
	cout<<"Postorder: "; postorder(root); cout<<endl;
	return 0;
}