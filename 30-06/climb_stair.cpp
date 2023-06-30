#include<iostream>
#include<vector>
using namespace std;
int n_stair(int n, int k){
	if(n < 0) return 0;
	if(n == 0) return 1;
	int ans = 0;
	for(int i = 1; i <= k and n - i >= 0; i++){
		ans += n_stair(n-i, k);
	}
	return ans;
}
int top_down(int n, int k, vector<int> & dp){
	// check before calculate
	if(dp[n] != -1) return dp[n];
	if(n == 0) return dp[n] = 1;
	int ans = 0;
	for(int i = 1; i <= k and n - i >= 0; i++) ans += top_down(n-i, k, dp);
	// store before return
	return dp[n] = ans;
}
int bot_up(int n, int k){
	vector<int> v(n+1);
	v[0] = 1;
	for(int i = 1; i <= n; i++){
		int ans = 0;
		for(int j = 1; j <= k and i-j >= 0; j++){
			ans += v[i-j];
		}
		v[i] = ans;
	}
	return v[n];
}
int main(){
	int n = 50, k = 30;
	// cout<<n_stair(n, k)<<endl;
	vector<int> dp(n+1, -1);
	cout<<top_down(n, k, dp)<<endl;
	cout<<bot_up(n, k)<<endl;
	return 0;
}