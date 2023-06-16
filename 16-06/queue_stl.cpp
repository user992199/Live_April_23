#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	int n = 7;
	for(int i = 0; i < n; i++){
		q.push(i+1);
		cout<<i+1<<" ";
	}
	cout<<endl;
	cout<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}