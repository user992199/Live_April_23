#include<iostream>
using namespace std;
int power(int x, int n){
	// base case
	if(n == 0) return 1;
	// recusive case
	return x * power(x, n-1);
}
int multiply(int x, int n){
	// base case
	if(n == 0) return 0;
	// recusive case
	return x + multiply(x, n-1);
}
int main(){
	int x = 2, n = 10;
	cout<<power(x, n)<<endl;
	cout<<multiply(x, n)<<endl;
	return 0;
}