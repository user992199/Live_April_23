#include<iostream>
using namespace std;
int find_pivot(int * arr, int n){
	int s = 0, e = n-1;
	while(s <= e){
		int mid = (s + e) / 2;
		if(arr[mid] > arr[mid+1]){
			return mid;
		}
		else if(arr[mid-1] > arr[mid]){
			return mid - 1;
		}
		else if(arr[mid] > arr[e]){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<find_pivot(arr, n)<<endl;
	return 0;
}