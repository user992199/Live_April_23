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
node * lowest_common_ancestor(node * root, int k1, int k2){
	if(!root) return 0;
	if(root -> data == k1 or root -> data == k2) return root;
	node * left = lowest_common_ancestor(root -> left, k1, k2);
	node * right = lowest_common_ancestor(root -> right, k1, k2);
	if(left and right) return root;
	if(left) return left;
	return right;
}
int main(){
	node * root = 0;
	root = create_bt();
	int a = 8, b = 3;
	// cin>>a>>b;
	node * ans = lowest_common_ancestor(root, a, b);
	ans ? cout<<ans -> data <<endl : cout << "Nodes not present\n" ;
	return 0;
}