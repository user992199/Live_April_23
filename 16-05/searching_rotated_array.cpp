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
int binary_search_helper(int * arr, int s, int e, int key){
	while(s <= e){
		int mid = (s+e)/2;
		if(arr[mid] == key) return mid;
		else if(arr[mid] > key) e = mid-1;
		else s = mid+1;
	}
	return -1;
}
int binary_search(int * arr, int n, int key){
	// finding pivot
	int pivot = find_pivot(arr, n);
	// if array is not rotated, apply normal binary search
	if(pivot == -1) return binary_search_helper(arr, 0, n-1, key);
	// apply binary search on first half
	int ans = binary_search_helper(arr, 0, pivot, key);
	// if key is found, return the ans
	if(ans != -1) return ans;
	// apply binary search on second half
	return binary_search_helper(arr, pivot+1, n-1, key);
}
int main(){
	int arr[] = {5, 6, 7, 8, 9, 10, 11, 1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<find_pivot(arr, n)<<endl;
	cout<<binary_search(arr, n, 1)<<endl;
	return 0;
}