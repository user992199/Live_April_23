#include<iostream>
using namespace std;
bool check_prime(int n){
	if(n < 2) return false;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n = 2;
	if(check_prime(n)){
		cout<<"prime\n";
	}else{
		cout<<"nprime\n";
	}
	return 0;
}