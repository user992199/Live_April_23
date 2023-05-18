#include<iostream>
using namespace std;

// choti problem kya hogi
// choti problem ka ans use karke badi problem kaise solve hogi
// base case kya hoga

// Note:- Assume Recursive case hamesha sahi answer hi dega
bool check_1a(int * arr, int n, int i = 0){
	// base case
	if(i == n-1) return true;
	// recursive case
	if(arr[i] > arr[i+1]) return false;
	return check_1a(arr, n, i+1);
}
bool check_1b(int * arr, int n){
	// base case
	if(n == 1) return true;
	// recursive case
	if(arr[0] > arr[1]) return false;
	return check_1b(arr+1, n-1);
}
bool check_2(int * arr, int n){
	// base case
	if(n == 1) return true;
	// recursive case
	if(arr[n-1] < arr[n-2]) return false;
	return check_2(arr, n-1);
}
int main(){
	int arr[] = {2, 5, 7, 10, 11, 13, 18, 25};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(check_1b(arr, n)){
		cout<<"Sorted\n";
	}else{
		cout<<"NOT so Sorted\n";
	}
	return 0;
}