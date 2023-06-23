#include<iostream>
#include<queue>
#include<climits>
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
int find_min(node * root){
	if(!root) return INT_MAX;
	if(root -> left) return find_min(root -> left);
	return root -> data;
}
int find_max(node * root){
	if(!root) return INT_MIN;
	if(root -> right) return find_max(root -> right);
	return root -> data;
}
bool check_bst(node * root){
	if(!root) return true;
	int left_max = find_max(root -> left); // logn
	int right_min = find_min(root -> right); // logn 
	if(root -> data < left_max or root -> data > right_min)
		return false;
	return check_bst(root -> left) and check_bst(root -> right);
}
class triplet{
public:
	bool check;
	int min, max;
	triplet(bool c, int mi, int mx):check(c), min(mi), max(mx){}
};
triplet check_bst_helper(node * root){
	if(!root) return triplet(true, INT_MAX, INT_MIN);
	triplet lt = check_bst_helper(root -> left);
	triplet rt = check_bst_helper(root -> right);
	int min_of_tree = min(root -> data, lt.min);
	int max_of_tree = max(root -> data, rt.max);
	bool ans = true;
	if(!(lt.check and rt.check))
		ans = false;
	if(lt.max > root -> data or rt.min < root -> data)
		ans = false;
	return triplet(ans, min_of_tree, max_of_tree);
}
bool check_bst_opt(node * root){
	return check_bst_helper(root).check;
}
bool check_bst_2(node * root, int ll = INT_MIN, int ul = INT_MAX){
	if(!root) return true;
	if(ll > root -> data or root -> data > ul) return false;
	return check_bst_2(root -> left, ll, root -> data) 
		and check_bst_2(root -> right, root -> data, ul);
}
int main(){
	node * root = 0;
	create_bst(root);
	// root -> data = 4;
	// cout<<find_max(root -> left)<<endl;
	check_bst_2(root) ? cout<<"Yes\n" : cout<<"No\n";
	return 0;
}