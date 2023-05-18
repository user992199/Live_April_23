#include<iostream>
using namespace std;
long long factorial(long long n){
	// base case
	if(n == 0) return 1;
	// recursive case
	long long chota_ans = factorial(n-1);
	// form the ans
	long long bada_ans = n * chota_ans;
	return bada_ans;
}
int main(){
	long long n = 26;
	while(n--)
		cout<<n<<": "<<factorial(n)<<endl;
	return 0;
}