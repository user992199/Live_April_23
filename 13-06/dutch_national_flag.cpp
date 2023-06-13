#include<iostream>
using namespace std;
void dnf(int * arr, int n){
	int z = 0, t = n-1, i = 0;
	while(i <= t){
		if(arr[i] == 0){
			swap(arr[i], arr[z]);
			i++; z++;
		}else if(arr[i] == 1){
			i++;
		}else{
			swap(arr[i], arr[t]);
			t--;
		}
	}
}
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[] = {2, 1, 1, 0, 2, 1, 0, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	dnf(arr, n);
	print(arr, n);
	return 0;
}