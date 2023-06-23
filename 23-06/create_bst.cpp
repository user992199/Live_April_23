#include<iostream>
#include<queue>
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
}
int main(){
	node * root = 0;
	create_bst(root);
	lot(root);
	return 0;
}