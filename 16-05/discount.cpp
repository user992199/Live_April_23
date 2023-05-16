#include<iostream>
using namespace std;
int dis(int m, int n, int x, int y){
	int start = 0, end = n;
	int ans = 0;
	while(start <= end){
		int mid = start + (end - start)/2;
		if(m + ((n-mid)*y) - (mid*x) >= 0){
			ans = mid;
			start = mid+1;
		}else{
			end = mid-1;
		}
	}
	return ans;
}
int main(){
	int m = 10, n = 10, x = 2, y = 4;
	cout<<dis(m, n, x, y)<<endl;
	return 0;
}