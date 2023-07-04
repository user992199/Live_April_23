#include<iostream>
#include<cstring>
#include<vector>
#define vi vector<int>
#define vvi vector<vector<int>>
using namespace std;
void print_vvi(vvi dp){
	for(int i = 0; i < dp.size(); i++){
		for(int j = 0; j < dp[i].size(); j++){
			cout<<dp[i][j]<<"\t";
		}cout<<endl;
	}
}
int lcs(string s1, string s2, int i = 0, int j = 0){
	// base case
	if(i == s1.size() or j == s2.size()) return 0;
	// recursive case
	if(s1[i] == s2[j]){
		return lcs(s1, s2, i+1, j+1) + 1;
	}
	return max(lcs(s1, s2, i+1, j), lcs(s1, s2, i, j+1));
}
int lcs_td(string s1, string s2, vvi & dp, int i = 0, int j = 0){
	// base case
	if(i == s1.size() or j == s2.size()) return 0;
	// check before calculate
	if(dp[i][j] != -1) return dp[i][j];
	// recursive case
	// store before return
	if(s1[i] == s2[j]){
		return dp[i][j] = lcs_td(s1, s2, dp, i+1, j+1) + 1;
	}
	return dp[i][j] = max(lcs_td(s1, s2, dp, i+1, j), lcs_td(s1, s2, dp, i, j+1));
}
int lcs_bu(string s1, string s2){
	int m = s1.size();
	int n = s2.size();
	vvi dp(m + 1, vi(n + 1, 0));
	for(int i = m-1; i >= 0; i--){
		for(int j = n-1; j >= 0; j--){
			if(s1[i] == s2[j]) dp[i][j] = dp[i+1][j+1] + 1;
			else dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
		}
	}
	print_vvi(dp);
	return dp[0][0];
}
int main(){
	string s1 = "Tuesday";
	string s2 = "Thursday";
	cout<<lcs(s1, s2)<<endl;
	vvi dp(s1.size(), vi(s2.size(), -1));
	cout<<lcs_td(s1, s2, dp)<<endl;
	print_vvi(dp);
	cout<<lcs_bu(s1, s2)<<endl;
	return 0;
}