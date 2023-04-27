#include<iostream>
using namespace std;
int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i <= n-2; i++){
		for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
		}cout<<endl;
		for(int j = 0; j <= n-2-i; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}