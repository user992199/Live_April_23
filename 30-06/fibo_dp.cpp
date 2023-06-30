#include<iostream>
#include<vector>
using namespace std;
int fibo_rec(int n){
	if(n == 2 or n == 1) return n-1;
	return fibo_rec(n-1) + fibo_rec(n-2);
}
int fibo_top_down(int n, vector<int> & v){
	// check before calculate/compute
	if(v[n] != -1) return v[n];
	// store before return
	if(n == 2 or n == 1) return v[n] = n-1;
	return v[n] = fibo_top_down(n-1, v) + fibo_top_down(n-2, v);
}
int fibo_bottom_up(int n){
	vector<int> v(n+1);
	v[1] = 0;
	v[2] = 1;
	for(int i = 3; i <= n; i++){
		v[i] = v[i-1] + v[i-2];
		// cout<<v[i]<<" ";
	}
	// cout<<endl;
	return v[n];
}
int space_opt_fibo(int n){
	int second_last_term = 0, last_term = 1, curr_term;
	for(int i = 3; i <= n; i++){
		curr_term = second_last_term + last_term;
		second_last_term = last_term;
		last_term = curr_term;
	}
	return curr_term;
}
int main(){
	int n = 10;
	vector<int> v(n+1, -1);
	// cout<<fibo_rec(100)<<endl;
	cout<<fibo_top_down(n, v)<<endl;
	cout<<fibo_bottom_up(n)<<endl;
	cout<<space_opt_fibo(n)<<endl;
	// for(int i = 1; i <= n ; i++){
	// 	cout<<v[i]<<" ";
	// }cout<<endl;
	return 0;
}