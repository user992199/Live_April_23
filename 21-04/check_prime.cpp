#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 2;
	while(i < n){
		if(n % i == 0){ // if remainder is zero => n is divisible by i
			cout<<n<<" is NOT prime.\n";
			return 0;
		}
		i = i + 1;
	}
	cout << n <<" is prime.\n";
	return 0;
}