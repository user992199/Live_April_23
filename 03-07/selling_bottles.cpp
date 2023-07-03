#include<iostream>
#include<vector>
using namespace std;
void print_vv(vector<vector<int>> v){
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}cout<<endl;
	}
}
int sell(int arr[], int n, int i, int j, int cd = 1){
	// base case
	if(i > j) return 0;
	// recursive case
	int op1 = sell(arr, n, i+1, j, cd+1) + arr[i] * cd;
	int op2 = sell(arr, n, i, j-1, cd+1) + arr[j] * cd;
	return max(op1, op2);
}
int sell_td(int arr[], vector<vector<int>> &dp, int n, int i, int j){
	// base case
	if(i > j) return 0;
	// check before calculate
	if(dp[i][j] != -1) return dp[i][j];
	// recursive case
	int cd = n - j + i;
	int op1 = sell_td(arr, dp, n, i+1, j) + arr[i] * cd;
	int op2 = sell_td(arr, dp, n, i, j-1) + arr[j] * cd;
	// store before return
	return dp[i][j] = max(op1, op2);
}
int sell_bu(int arr[], int n){
	vector<vector<int>>dp(n, vector<int>(n, -1));
	for(int i = 0; i < n; i++){
		dp[i][i] = n * arr[i];
	}
	for(int s = n-2; s >= 0; s--){
		for(int e = s+1; e < n; e++){
			int cd = n - e + s;
			int op1 = cd * arr[s] + dp[s+1][e];
			int op2 = cd * arr[e] + dp[s][e-1];
			dp[s][e] = max(op1, op2);
		}
	}
	print_vv(dp);
	return dp[0][n-1];
}
int main(){
	int arr[] = {2, 3, 5, 1, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<vector<int>> dp(n, vector<int> (n, -1));
	cout<<sell(arr, n, 0, n-1)<<endl;
	// print_vv(dp);
	cout<<sell_td(arr, dp, n, 0, n-1)<<endl;
	print_vv(dp);
	cout<<sell_bu(arr, n)<<endl;
	return 0;
}