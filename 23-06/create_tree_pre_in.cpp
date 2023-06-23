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
node * create_bt_prein(int * pre, int * in, int s, int e, int &i){
	if(s > e) return 0;
	node * root = new node(pre[i]);
	i++;
	int index = s;
	for(; in[index] != pre[i-1]; index++);
	root -> left = create_bt_prein(pre, in, s, index - 1, i);
	root -> right = create_bt_prein(pre, in, index + 1, e, i);
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
	int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
	int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
	int i = 0;
	int n = sizeof(pre)/sizeof(pre[0]);
	root = create_bt_prein(pre, in, 0, n-1, i);
	lot(root);
	cout<<endl;
	return 0;
}