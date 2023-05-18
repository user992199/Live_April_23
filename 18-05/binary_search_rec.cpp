#include<iostream>
using namespace std;
int binary_search(int * arr, int key, int start, int end){
	// base case
	if(start > end) return -1;
	// recursive case
	int mid = (start + end)/2;
	if(arr[mid] == key) return mid;
	return arr[mid] < key ? 
		binary_search(arr, key, mid+1, end):
		binary_search(arr, key, start, mid-1);
	// if(arr[mid] < key){
	// 	return binary_search(arr, key, mid+1, end);
	// }else{
	// 	return binary_search(arr, key, start, mid-1);
	// }
}
int main(){
	int arr[] = {-10, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 8;
	cout<<binary_search(arr, key, 0, n-1)<<endl;
	return 0;
}