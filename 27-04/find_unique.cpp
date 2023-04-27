#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,5,3,2,1,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans;
	for(int i = 0; i < n; i++){
		bool unique_found = true;
		for(int j = 0; j < n; j++){
			if(i != j and arr[i] == arr[j]){
				unique_found = false;
				break;
			}
		}
		if(unique_found){
			ans = arr[i];
			break;
		}
	}
	cout<<ans<<endl;
	// int arr[] = {1,2,3,5,3,2,1,5,6};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// int ans = 0;
	// for(int i = 0; i < n; i++){
	// 	ans ^= arr[i];
	// }
	// cout<<ans<<endl;
	return 0;
}