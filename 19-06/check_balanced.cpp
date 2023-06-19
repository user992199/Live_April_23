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
bool check_bal(node * root){
	if(!root) return true;
	if(!(abs(height(root -> left) - height(root -> right)) <= 1)) return false;
	if(!check_bal(root -> left)) return false;
	return check_bal(root -> right);
}
class pair_bi{
public:
	int height;
	bool check;
	pair_bi(int h, bool c): height(h), check(c){}
};
pair_bi check_bal_helper(node * root){
	if(!root) return pair_bi(0, true);
	pair_bi lc = check_bal_helper(root -> left);
	pair_bi rc = check_bal_helper(root -> right);
	int diff = abs(lc.height - rc.height);
	int ht = max(lc.height, rc.height) + 1;
	bool cb = lc.check and rc.check and diff <= 1;
	return pair_bi(ht, cb);
}
bool check_bal_opt(node * root){
	pair_bi ans = check_bal_helper(root);
	return ans.check;
}
int main(){
	node * root = 0;
	root = create_bt();
	check_bal_opt(root) ? cout<<"Yes\n" : cout<<"No\n";
	return 0;
}