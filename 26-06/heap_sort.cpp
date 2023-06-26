#include<iostream>
#include<queue>
using namespace std;
void heap_sort(int * arr, int n){ 
	// nlog + nlogn + n => nlogn
	priority_queue<int, vector<int>, greater<int>> h;
	for(int i = 0; i < n; i++) h.push(arr[i]);
	for(int i = 0; i < n; i++){
		arr[i] = h.top();
		h.pop();
	}
}
void print(int * arr, int n){
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	heap_sort(arr, n);
	print(arr, n);
	return 0;
}