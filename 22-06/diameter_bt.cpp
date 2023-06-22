#include<iostream>
#include<cmath>
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
int height(node * root){
	if(!root) return 0;
	return max(height(root -> left), height(root -> right)) + 1;
}
int diameter(node * root){
	if(!root) return 0;
	// return height(root -> left) + height(root -> right);
	int op1 = height(root -> left) + height(root -> right);
	int op2 = diameter(root -> left);
	int op3 = diameter(root -> right);
	return max(op1, max(op2, op3));
}
class Pair_hd{
public:
	int height, diameter;
	Pair_hd(int h, int d):height(h), diameter(d){}
};
Pair_hd dia_helper(node * root){
	if(!root) return Pair_hd(0, 0);
	Pair_hd lc = dia_helper(root -> left);
	Pair_hd rc = dia_helper(root -> right);
	int op1 = lc.height + rc.height;
	int op2 = lc.diameter;
	int op3 = rc.diameter;
	int diameter =  max(op1, max(op2, op3));
	int height = max(lc.height, rc.height) + 1;
	return Pair_hd(height, diameter);
}
int diameter_opt(node * root){
	return dia_helper(root).diameter;
}
int main(){
	node * root = 0;
	root = create_bt();
	cout<<diameter(root)<<endl;
	cout<<diameter_opt(root)<<endl;
	return 0;
}