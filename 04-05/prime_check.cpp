#include<iostream>
using namespace std;
bool check_prime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n = 97;
	check_prime(n) ? cout<<"Prime\n" : cout<<"Not Prime\n";
	return 0;
}