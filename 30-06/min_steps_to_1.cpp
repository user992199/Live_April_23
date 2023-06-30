#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int min_step_rec(int n){
	if(n <= 1) return 0;
	// int op1, op2, op3;
	// op1 = op2 = op3 = INT_MAX;
	int ans = INT_MAX;
	if(n % 3 == 0) ans = min(ans, min_step_rec(n/3));
	if(n % 2 == 0) ans = min(ans, min_step_rec(n/2));
	ans = min(ans, min_step_rec(n-1));
	return ans+1;
}
int td(int n, vector<int> & dp){
	// check before calculate
	if(dp[n] != -1) return dp[n];
	if(n <= 1) return dp[n] = 0;
	int ans = INT_MAX;
	if(n % 3 == 0) ans = min(ans, td(n/3, dp));
	if(n % 2 == 0) ans = min(ans, td(n/2, dp));
	ans = min(ans, td(n-1, dp));
	// store before return
	return dp[n] = ans+1;
}
int bu(int n){
	vector<int> dp(n+1);
	dp[1] = 0; // base case
	for(int i = 2; i <= n; i++){
		int ans = INT_MAX;
		if(i % 3 == 0) ans = min(ans, dp[i/3]);
		if(i % 2 == 0) ans = min(ans, dp[i/2]);
		ans = min(ans, dp[i-1]);
		dp[i] = ans+1;
	}
	return dp[n];
}
int main(){
	int n = 10000;
	// cout<<min_step_rec(n)<<endl;
	vector<int> dp(n+1, -1);
	cout<<td(n, dp)<<endl;
	cout<<bu(n)<<endl;
	return 0;
}