#include<iostream>
using namespace std;
int n_staircase(int n, int k = 2, int curr_stair = 0){
	// base case
	if(curr_stair == n){
		return 1;
	}
	// recursive case
	int sum = 0;
	for(int i = 1; i <= k and i + curr_stair <= n; i++){
		sum += n_staircase(n, k, curr_stair+i);
	}
	return sum;
}
int main(){
	int n = 5;
	cout<<n_staircase(n, 3)<<endl;
	return 0;
}