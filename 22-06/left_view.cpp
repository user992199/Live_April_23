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
void left_view(node * root){
	queue<node *> q;
	q.push(0);
	q.push(root);
	cout<<"Left View: \n";
	while(q.size() > 1){
		node * cn = q.front();
		q.pop();
		if(!cn){
			if(q.empty()) break;
			q.push(0);
			cn = q.front();
			cout<<cn -> data<<" ";
			continue;
		}
		if(cn -> left) q.push(cn -> left);
		if(cn -> right) q.push(cn -> right);
	}
	cout<<endl;
}
void left_view_rec(node * root, int cl, int &ml){
	if(!root) return;
	if(cl > ml){
		ml = cl;
		cout<<root -> data<<" ";
	}
	left_view_rec(root->left, cl + 1, ml);
	left_view_rec(root->right, cl + 1, ml);
}
int main(){
	node * root = 0;
	root = create_bt();
	left_view(root);
	int ml = -1;
	left_view_rec(root, 0, ml);
	return 0;
}