#include<iostream>
#include<climits>
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
void find_min_max_levels(node * root, int &min_l, int &max_l, int cl = 0){
	if(!root) return;
	if(cl < min_l) min_l = cl;
	if(cl > max_l) max_l = cl;
	find_min_max_levels(root -> left, min_l, max_l, cl - 1);
	find_min_max_levels(root -> right, min_l, max_l, cl + 1);
}
bool print_node_of_level(node * root, int tl, int cl = 0){
	if(!root) return false;
	if(cl == tl){
		cout<<root -> data<<" ";
		return true;
		// return false;
	}
	if(tl < 0){
		if(print_node_of_level(root -> left, tl, cl-1)) return true;
		return print_node_of_level(root -> right, tl, cl+1);
	}
	else if(tl > 0){
		if(print_node_of_level(root -> right, tl, cl+1)) return true;
		return print_node_of_level(root -> left, tl, cl-1);
	}
}
void top_view(node * root){
	int min_l = INT_MAX, max_l = INT_MIN;
	find_min_max_levels(root, min_l, max_l, 0);
	for(int i = min_l; i <= max_l; i++){
		// cout<<i<<" ";
		print_node_of_level(root, i, 0);
	}
	cout<<endl;
}
int main(){
	node * root = 0;
	root = create_bt();
	top_view(root);
	return 0;
}