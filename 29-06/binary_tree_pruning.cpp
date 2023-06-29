#include<iostream>
#include<climits>
#include<queue>
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
node * binary_tree_pruning(node * root) {
	if(!root) return 0;
	root -> left = binary_tree_pruning(root -> left);
	root -> right = binary_tree_pruning(root -> right);
	if(root -> data == 1 or root -> left or root -> right){
		return root;
	}
	delete root;
	return 0;
}
void lot(node * root){
	queue<node *> q;
	q.push(root);
	q.push(0);
	cout<<"Level Order Traversal: \n";
	while(q.size() > 1){
		node * cn = q.front();
		q.pop();
		if(!cn){
			cout<<endl;
			q.push(0);
			continue;
		}
		cout<<cn -> data<<" ";
		if(cn -> left) q.push(cn -> left);
		if(cn -> right) q.push(cn -> right);
	}
	cout<<endl;
}
int main(){
	node * root = 0;
	root = create_bt();
	int a = 8, b = 3;
	// cin>>a>>b;
	lot(root);
	binary_tree_pruning(root);
	lot(root);
	return 0;
}