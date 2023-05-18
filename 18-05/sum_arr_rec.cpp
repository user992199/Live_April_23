#include<iostream>
using namespace std;
int sum(int * arr, int n){
	// base case
	if(n == 0) return 0;
	// recursive case
	return arr[n-1] + sum(arr, n-1);
}
int main(){
	int arr[] = {2, 5, 7, 10, 11, 13, 18, 25};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum(arr, n)<<endl;
	return 0;
}