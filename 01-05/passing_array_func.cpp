#include<iostream>
using namespace std;
int sum_of_arr(int arr[], int n){
	// cout<<"size of(in func): "<<sizeof(arr)<<endl;
	// int si = sizeof(arr)/sizeof(arr[0]);
	// cout<<si<<endl;	
	int sum = 0;
	for(int i = 0; i < 5; i++){
		sum += arr[i];
	}
	return sum;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"size of(in main): "<<sizeof(arr)<<endl;
	cout<<sum_of_arr(arr, n)<<endl;
	return 0;
}