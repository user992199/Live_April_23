#include<iostream>
using namespace std;
int unique_num_3(int * arr, int n, int k){
	int ans = 0;
	for(int i = 0; i < 32; i++){
		int mask = 1 << i;
		int bit = 0;
		for(int j = 0; j < n; j++){
			if(arr[j] & mask){
				bit += 1;
			}
		}
		bit %= k;
		if(bit) ans += mask;
	}
	return ans;
}
int main(){
	int arr[] = {1, 4, 5, 5, 4, 3, 1, 1, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]); // n == kx + 1
	int k = 3;
	cout<<unique_num_3(arr, n, k)<<endl;
	return 0;
}