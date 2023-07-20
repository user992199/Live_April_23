#include<iostream>
#include<queue>
using namespace std;
void first_neg(int * arr, int n, int k){
	queue<int> q;
	int sp = 0, ep = 0;
	while(ep < k){
		if(arr[ep] < 0) q.push(arr[ep]);
		ep++;
	}
	q.empty() ? cout<<"+ve " : cout<<q.front()<<" ";
	while(ep < n){
		if(arr[sp] < 0) q.pop();
		sp++;
		if(arr[ep] < 0) q.push(arr[ep]);
		ep++;
		q.empty() ? cout<<"+ve " : cout<<q.front()<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[] = {-5, 8, 1, 6, -7, 3, -4, -9, 0, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 5;
	first_neg(arr, n, k);
	return 0;
}