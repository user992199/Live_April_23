#include<iostream>
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
void lot(node * root){
	queue<node *> q;
	q.push(root);
	cout<<"Level Order Traversal: \n";
	while(!q.empty()){
		node * cn = q.front();
		q.pop();
		cout<<cn -> data<<" ";
		if(cn -> left) q.push(cn -> left);
		if(cn -> right) q.push(cn -> right);
	}
	cout<<endl;
}
int main(){
	node * root = 0;
	root = create_bt();
	lot(root);
	return 0;
}