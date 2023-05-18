#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void bub_sort_loop(int * arr, int n){
	for(int i = 0; i < n-1; i++){ // init
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}
void bs_par_rec(int * arr, int n, int i = 0){ // init
	// base case
	if(i == n-1) return; // condition check
	// recursive case
	for(int j = 0; j < n-i-1; j++){
		if(arr[j] > arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
	}
	bs_par_rec(arr, n, i+1); // updation
}
void bs_complete_rec(int * arr, int n, int i = 0, int j = 0){ // init for outer loop
	// base case
	if(i == n-1) return; // condition check for outer loop
	if(j == n-i-1){ // condition check for inner loop
		// updation for outer loop
		// initialization for inner loop
		bs_complete_rec(arr, n, i+1, 0);
		return;
	}
	// recursive case
	// actual work	
	if(arr[j] > arr[j+1]){
		swap(arr[j], arr[j+1]);
	}
	// updation for inner loop
	bs_complete_rec(arr, n, i, j+1);
}
void bs_complete_rec_without_comment(int * arr, int n, int i = 0, int j = 0){ // init for outer loop
	if(i == n-1) return;
	if(j == n-i-1){
		bs_complete_rec_without_comment(arr, n, i+1, 0);
		return;
	}
	if(arr[j] > arr[j+1]){
		swap(arr[j], arr[j+1]);
	}
	bs_complete_rec_without_comment(arr, n, i, j+1);
}
int main(){
	int arr[] = {10, 9, 8, 7, 6, 0, -1, -2, -10, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	bs_complete_rec(arr, n);
	print(arr, n);
	return 0;
}