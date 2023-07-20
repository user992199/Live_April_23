#include<iostream>
#include<climits>
using namespace std;
int max_sum(int * arr, int n, int k){
	int window_sum = 0, ans = INT_MIN;
	int sp = 0, ep = 0;
	// starting window computation
	while(ep < k){
		window_sum += arr[ep];
		ep++;
	}
	ans = window_sum;
	// sliding the window across the array
	while(ep < n){
		window_sum -= arr[sp];
		sp++;
		window_sum += arr[ep];
		ep++;
		ans = max(ans, window_sum);
	}
	return ans;
}
int main(){
	int arr[] = {5, 8, 1, 6, 7, 3, 4, 9, 0, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 2;
	cout<<max_sum(arr, n, k)<<endl;
	return 0;
}