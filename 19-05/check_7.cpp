#include<iostream>
using namespace std;
bool check_7(int * arr, int n){
	// base case
	if(n == 0) return false;
	// recursive case
	if(arr[0] == 7) return true;
	return check_7(arr+1, n-1);
}
int first_7(int * arr, int n){
	// base case
	if(n == 0) return -1;
	// recursive case
	if(arr[0] == 7) return 0;
	int ind = first_7(arr+1, n-1);
	return ind == -1 ? ind : ind+1;
}
int last_7(int * arr, int n){
	// base case
	if(n == 0) return -1;
	// recursive case
	if(arr[n-1] == 7) return n-1;
	return last_7(arr, n-1);
}
void print_all_7(int * arr, int n){
	// base case
	if(n == 0) return;
	// recursive case
	print_all_7(arr, n-1);
	if(arr[n-1] == 7)
		cout<<n-1<<" ";
}
int main(){
	int arr[] = {0, 3, 6, 7, 8, 10, 2, 5, 7, 1, 4, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	check_7(arr, n) ? cout<<"Yes 7 is there\n" : cout<<"No 7\n";
	cout<<first_7(arr, n)<<endl;
	cout<<last_7(arr, n)<<endl;
	print_all_7(arr, n);
	cout<<endl;
	return 0;
}