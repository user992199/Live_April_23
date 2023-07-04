#include<iostream>
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
int knapsack_rec(int price[], int weight[], int n, int cap, int i = 0){
	// base case
	if(i == n or cap == 0) return 0;
	// recursive case
	int op1 = 0;
	if(cap >= weight[i]){ // current item ko chura lo
		op1 = price[i] + knapsack_rec(price, weight, n, cap - weight[i], i+1);
	}
	int op2 = knapsack_rec(price, weight, n, cap, i+1); // current item ko mat churao
	return max(op1, op2);
}
int knapsack_td(int price[], int weight[], vvi &dp, int n, int cap, int i = 0){
	// base case
	if(i == n) return 0;
	if(cap == 0) return dp[cap][i] = 0;
	// check before calculate
	if(dp[cap][i] != -1) return dp[cap][i];
	// recursive case
	int op1 = 0;
	if(cap >= weight[i]){ // current item ko chura lo
		op1 = price[i] + knapsack_td(price, weight, dp, n, cap - weight[i], i+1);
	}
	int op2 = knapsack_td(price, weight, dp, n, cap, i+1); // current item ko mat churao
	// store before return
	return dp[cap][i] = max(op1, op2);
}
int main(){
	int price[] = {10, 4, 1, 2, 5};
	int weight[] = {1, 5, 8, 2, 3};
	int n = sizeof(price)/sizeof(price[0]);
	int cap = 10;
	vvi dp(cap+1, vi(n, -1));
	cout<<knapsack_rec(price, weight, n, cap)<<endl;
	cout<<knapsack_td(price, weight, dp, n, cap)<<endl;
	print_vvi(dp);
	return 0;
}