#include<iostream>
#include<string>
#include<climits>
#include<vector>
#define vvi vector<vector<int>>
#define vi vector<int>
using namespace std;
void print_vvi(vvi dp){
	for(int i = 0; i < dp.size(); i++){
		for(int j = 0; j < dp[i].size(); j++){
			cout<<dp[i][j]<<" ";
		}cout<<endl;
	}
}
int rec(string s1, string s2, int m, int n){
	// base case
	if(m == 0) return n;
	if(n == 0) return m;
	// recursive case
	if(s1[m-1] == s2[n-1]){
		return rec(s1, s2, m-1, n-1);
	}else{
		// changing / updating
		int op1 = rec(s1, s2, m-1, n-1);
		// deleting
		int op2 = rec(s1, s2, m-1, n);
		// inserting
		int op3 = rec(s1, s2, m, n-1);
		return min(op1, min(op2, op3)) + 1;
	}
}
int td(string s1, string s2, int m, int n, vvi &dp){
	// check before calculate
	if(dp[m][n] != -1) return dp[m][n];
	// store before return
	if(m == 0) return dp[m][n] = n;
	if(n == 0) return dp[m][n] = m;
	if(s1[m-1] == s2[n-1]){
		return dp[m][n] = rec(s1, s2, m-1, n-1);
	}else{
		int op1 = td(s1, s2, m-1, n-1, dp);
		int op2 = td(s1, s2, m-1, n, dp);
		int op3 = td(s1, s2, m, n-1, dp);
		return dp[m][n] = min(op1, min(op2, op3)) + 1;
	}
}
int bu(string s1, string s2){
	int m = s1.size(), n = s2.size();
	vvi dp(m+1, vi(n+1, 0));
	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			if(i == 0) dp[i][j] = j;
			else if(j == 0) dp[i][j] = i;
			else{
				if(s1[i] == s2[j]) dp[i][j] = dp[i-1][j-1];
				else{
					dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j])) + 1;
				}
			}
		}
	}
	print_vvi(dp);
	return dp[m][n];
}
int main(){
	string s1 = "Thursday", s2 = "Ball";
	int m = s1.size(), n = s2.size();
	cout<<rec(s1, s2, m, n)<<endl;
	vvi dp(m+1, vi(n+1, -1));
	cout<<td(s1, s2, m, n, dp)<<endl;
	print_vvi(dp);
	cout<<bu(s1, s2)<<endl;
	return 0;
}