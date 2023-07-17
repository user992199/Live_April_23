#include<iostream>
using namespace std;
void unique_num(int * arr, int n){
	int xor_all = 0;
	for(int i = 0; i < n; i++){
		xor_all ^= arr[i];
	}
	int mask = 1;
	for(int i = 0; i < 32; i++){
		if(xor_all & mask){
			// mask = 1 << i;
			break;
		}
		mask <<= 1;
	}
	int u1 = 0, u2 = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] & mask){
			u1 ^= arr[i];
		}else{
			u2 ^= arr[i];
		}
	}
	cout<<min(u1, u2)<<" "<<max(u1, u2)<<endl;
}
int main(){
	int arr[] = {1, 7, 4, 3, 5, 1, 5, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	unique_num(arr, n);
	return 0;
}