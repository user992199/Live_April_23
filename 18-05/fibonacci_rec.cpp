#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n < 3){
		return n-1;
	}
	// recursive case
	int chota_ans_1 = fibo(n-1);
	int chota_ans_2 = fibo(n-2);
	// form the ans
	int bada_ans = chota_ans_1 + chota_ans_2;
	return bada_ans;
	// return fibo(n-1) + fibo(n-2);
}
int main(){
	int n = 11;
	while(n--)
		cout<<n<<": "<<fibo(n)<<endl;
	return 0;
}