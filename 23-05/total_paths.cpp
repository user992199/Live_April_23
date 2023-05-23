#include<iostream>
using namespace std;
int total_paths(int m, int n, int i = 0, int j = 0){
	// base case
	// if(i == m or j == n){
	// 	return 0;
	// }
	if(i == m-1 and j == n-1){
		return 1;
	}
	// recursive case
	int p1 = 0, p2 = 0, p3 = 0;
	if(i+1 < m) p1 = total_paths(m, n, i+1, j);
	if(j+1 < n) p2 = total_paths(m, n, i, j+1);
	if(i+1 < m and j+1 < n) p3 = total_paths(m, n, i+1, j+1);
	return p1 + p2 + p3;
}
int main(){
	int m = 2, n = 2;
	cout<<total_paths(m, n)<<endl;
	return 0;
}