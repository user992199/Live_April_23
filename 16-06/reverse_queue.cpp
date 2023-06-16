#include<iostream>
#include<queue>
using namespace std;
template <typename T>
void print(queue<T> q){
	while(q.size()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
}
void reverse(queue<int> & q){
	if(q.empty()) return;
	int fe = q.front();
	q.pop();
	reverse(q);
	q.push(fe);
}
int main(){
	queue<int> q;
	for(int i = 0; i < 8; i++){
		q.push(i+1);
	}
	print(q);
	reverse(q);
	print(q);
	return 0;
}