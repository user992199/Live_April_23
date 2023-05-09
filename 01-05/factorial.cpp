#include<iostream>
using namespace std;
int factorial(int n){
	int ans = 1;
	for(int i = 2; i <= n; i++){
		ans *= i;
	}
	return ans;
}
int main(){
	int n = 10;
	cout<<factorial(n)<<endl;
	return 0;
}