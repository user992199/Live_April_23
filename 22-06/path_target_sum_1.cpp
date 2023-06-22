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
bool check_path_target_sum(node * root, int t, int cs = 0){
	if(!root) return false;
	cs += root -> data;
	if(root -> left == 0 and root -> right == NULL){
		return t == cs; 
	}
	bool left_se_path_mila = check_path_target_sum(root -> left, t, cs);
	bool right_se_path_mila = check_path_target_sum(root -> right, t, cs);
	return left_se_path_mila or right_se_path_mila;
}
int main(){
	node * root = 0;
	root = create_bt();
	int target;
	cin>>target;
	check_path_target_sum(root, target) ? cout<<"Path Found\n" : cout<<"Git\n";
	return 0;
}