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
void print_in_range(int n){
	for(int i = 2; i <= n; i++){
		if(check_prime(i))  cout<<i<<" ";
	}cout<<endl;
}
int sieve(int n){
	bool arr[10001] = {false};
	arr[2] = true;
	for(int i = 3; i <= n; i+=2){
		arr[i] = true;
	}
	for(int i = 3; i*i <= n; i+=2){
		if(arr[i]){
			for(int j = i*i; j <= n; j += i){
				arr[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(arr[i]) cout<<i<<" ";
	}cout<<endl;
}
int main(){
	int n = 97;
	// check_prime(n) ? cout<<"Prime\n" : cout<<"Not Prime\n";
	print_in_range(n);
	sieve(n);
	return 0;
}