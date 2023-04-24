#include<iostream>
using namespace std;
int main(){
	int n = 1000;
	// cin>>n;
	int i = 2;
	while(i <= n){
		int j = 2;
		bool kya_i_prime_hai = true;
		while(j < i){
			if(i % j == 0){ // if remainder is zero => n is divisible by i
				kya_i_prime_hai = false;
			}
			j = j + 1;
		}
		if(kya_i_prime_hai){
			cout<<i<<" ";
		}
		i++;
	}
	cout<<endl;
	return 0;
}