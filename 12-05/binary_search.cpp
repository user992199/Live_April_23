#include<iostream>
using namespace std;
int bs(int * a, int n, int k){
	int s = 0, e = n-1;
	while(s <= e){
		int m = s + (e-s)/2; // same as { m = (s+e)/2; }
		if(k == a[m]){
			return m;
		}
		else if(k < a[m]){
			e = m-1;
		}
		else if(k > a[m]){
			s = m+1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1, 4, 5, 7, 10, 16, 18, 22};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 1;
	cout<<bs(arr, n, key)<<endl;
	return 0;
}