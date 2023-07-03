#include<iostream>
using namespace std;
void print(int dp[][10], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}
void init(int dp[][10], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			dp[i][j] = -1;
		}
	}
}
int now_rec(char arr[][10], int m, int n, int i = 0, int j = 0){
	if(i == m-1 and j == n-1) return 1;
	if(i >= m or j >= n) return 0;
	// recursive case
	if(arr[i][j] == 'X') return 0;
	return now_rec(arr, m, n, i+1, j) + now_rec(arr, m, n, i, j+1);
}
int now_td(char arr[][10], int dp[][10], int m, int n, int i = 0, int j = 0){
	if(i >= m or j >= n) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	if(i == m-1 and j == n-1) return dp[i][j] = 1;
	// recursive case
	if(arr[i][j] == 'X') return 0;
	return dp[i][j] = now_td(arr, dp, m, n, i+1, j) + now_td(arr, dp, m, n, i, j+1);
}
int now_bu(char arr[][10], int m, int n){
	int dp[10][10];
	init(dp, m, n);
	dp[m-1][n-1] = 1;
	for(int col = n-2; col >= 0; col--){
		if(arr[m-1][col] != 'X')
			dp[m-1][col] = dp[m-1][col+1];
		else
			dp[m-1][col] = 0;
	}
	for(int row = m-2; row >= 0; row--){
		if(arr[row][n-1] != 'X')
			dp[row][n-1] = dp[row+1][n-1];
		else
			dp[row][n-1] = 0;
	}
	for(int row = m-2; row >= 0; row--){
		for(int col = n-2; col >= 0; col--){
			if(arr[row][col] == 'X') dp[row][col] = 0;
			else dp[row][col] = dp[row+1][col] + dp[row][col+1];
		}
	}
	print(dp, m, n);
	return dp[0][0];
}
int main(){
	int m = 4, n = 4;
	char arr[10][10] = {
		"OOOO",
		"OXXO",
		"OXOO",
		"OOOO"
	};
	int dp[10][10];
	init(dp, m, n);
	cout<<now_rec(arr, m, n)<<endl;
	cout<<now_td(arr, dp, m, n)<<endl;
	cout<<now_bu(arr, m, n)<<endl;
	return 0;
}