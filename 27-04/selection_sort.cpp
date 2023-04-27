#include<iostream>
using namespace std;
int main(){
	int arr[] = {10, 9, 100, 8, 7, 6, -1, 5, 4, 0, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n-1; i++){
		int min_idx = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		swap(arr[i], arr[min_idx]);
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}