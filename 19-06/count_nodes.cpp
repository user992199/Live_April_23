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
	if(data == -1) return NULL;
	node * root = new node(data);
	root -> left = create_bt();
	root -> right = create_bt();
	return root;
}
void preorder(node * root){
	if(!root) return;
	cout<<root -> data<<" ";
	preorder(root -> left);
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
void count_1(node * root, int & count){
	// zero pe true / non zero pe false
	if(!root) return;
	count++;
	count_1(root->left, count);
	count_1(root->right, count);
}
int count_2(node * root){
	if(!root) return 0;
	return count_2(root -> left) + 1 + count_2(root -> right);
}
int main(){
	node * root = 0;
	root = create_bt();
	cout<<"Preorder: "; preorder(root); cout<<endl;
	cout<<"Inorder: "; inorder(root); cout<<endl;
	cout<<"Postorder: "; postorder(root); cout<<endl;
	int c = 0;
	count_1(root, c);
	cout<<"Number of Nodes in BT: "<<c<<endl;
	cout<<"Number of Nodes in BT: "<<count_2(root)<<endl;
	return 0;
}