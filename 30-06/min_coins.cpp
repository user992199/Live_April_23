#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int min_coins_rec(int n, vector<int> &coins){
	if(n == 0) return 0;
	if(n < coins[0]) return -1;
	int ans = INT_MAX;
	for(int i = 0; i < coins.size(); i++){
		int option = min_coins_rec(n - coins[i], coins);
		if(option != -1){
			ans = min(ans, option);
		}
	}
	if(ans == INT_MAX) return -1;
	return ans + 1;
}
// top down
// bottom up
int main(){
	int n = 100;
	vector<int> coins({2, 7, 13});
	cout<<min_coins_rec(n, coins)<<endl;
	return 0;
}