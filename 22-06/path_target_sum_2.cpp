#include<iostream>
#include<cmath>
#include<vector>
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
bool check_path_target_sum(node * root, int t, vector<int> &v, int cs = 0){
	if(!root) return false;
	cs += root -> data;
	v.push_back(root -> data);
	if(root -> left == 0 and root -> right == NULL){
		if(t == cs){
			for(int i: v){
				cout<<i<<" ";
			}cout<<endl;
			return true;
		}
		v.pop_back();
		return false;
	}
	if(check_path_target_sum(root -> left, t, v, cs)){ 
		return true;
	}
	if(check_path_target_sum(root -> right, t, v, cs)){
		return true;
	}else{
		v.pop_back();
		return false;
	}
}
int main(){
	node * root = 0;
	root = create_bt();
	int target;
	cin>>target;
	vector<int> v;
	check_path_target_sum(root, target, v);
	return 0;
}