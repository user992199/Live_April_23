#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void merge_2_sa(int * arr, int s, int e){
	int mid = (s + e)/2;
	int i = s, j = mid+1, k = s;
	int a3[100];
	while(i <= mid and j <= e){
		if(arr[i] < arr[j]){
			a3[k++] = arr[i++];
		}else{
			a3[k++] = arr[j++];
		}
	}
	while(i <= mid){
		a3[k++] = arr[i++];
	}
	while(j <= e){
		a3[k++] = arr[j++];
	}
	for(int i = s; i <= e; i++){
		arr[i] = a3[i];
	}
}
void merge_sort(int * arr, int s, int e){
	// base case
	if(s == e) return;
	// recursive case
	// divide
	int mid = (s + e)/2;
	// sort
	merge_sort(arr, s, mid);
	merge_sort(arr, mid+1, e);
	// merge
	merge_2_sa(arr, s, e);
}
int main(){
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	merge_sort(arr, 0, n-1);
	print(arr, n);
	return 0;
}