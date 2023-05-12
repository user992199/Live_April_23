#include<iostream>
using namespace std;
long long sqrt(long long n){
	long long s = 0, e = n, m;
	while(s <= e){
		m = s + (e-s)/2;
		long long sq = m*m;
		if(sq == n){
			return m;
		}
		else if(n < sq){ 
			e = m-1;
		}
		else{
			s = m+1;
		}
	}
	if(n - (m*m) < 0){
		return m-1;
	}
	return m;
}
int main(){
	long long n = 120937; // e = INT_MAX
	long long sqrt_n = sqrt(n);
	cout<<sqrt_n<<endl;
	cout<<sqrt_n*sqrt_n<<endl;
	return 0;
}