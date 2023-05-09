#include<iostream>
#include<climits>
using namespace std;
int kadane(int * arr, int n){
	int curr_sum = 0;
	int max_sum = INT_MIN;
	for(int i = 0; i < n; i++){
		curr_sum += arr[i];
		max_sum = max(max_sum, curr_sum);
		curr_sum = max(curr_sum, 0);
	}
	return max_sum;
}
int cir_sub_sum(int * arr, int n){
	int op1 = kadane(arr, n);
	int ts = 0;
	for(int i = 0; i < n; i++){
		ts += arr[i]; 
		arr[i] *= -1;
		// cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
	}
	// cout<<"total sum: "<<ts<<endl;
	// cout<<"sum of most -ve part: "<<kadane(arr, n)<<endl;
	int op2 = ts + kadane(arr, n);
	return max(op1, op2);
}
int main(){
	int arr[] = {4, 5, -3, -8, 7, -1, 9, -2, -2, 10, -4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<kadane(arr, n)<<endl;
	cout<<cir_sub_sum(arr, n)<<endl;
	return 0;
}