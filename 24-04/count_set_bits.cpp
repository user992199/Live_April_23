#include<iostream>
using namespace std;
int main(){
	int n = 10;
	int ans = 0;
	for(; n ; n >>= 1) ans += (n & 1);
	cout<<ans<<endl;
	return 0;
}