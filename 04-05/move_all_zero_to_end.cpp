#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void move_zero_1(int * arr, int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1; j++){
			if(arr[j] == 0 and arr[j+1] != 0){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}
void move_zero_2(int * arr, int n){
	// int z = 0, nz = 0;
	// while(arr[z] != 0){ // (arr[z]) 
	// 	z++;
	// 	nz++;
	// }
	for(int z = 0, nz = 0; nz < n; nz++){ // z = 1, nz = 1
		if(arr[nz] != 0){
			swap(arr[z], arr[nz]);
			z++;
		}
	}
}
int main(){
	int arr[] = {2, 1, 0, 3, 0, 5, 0, 0, 0, 4, 0, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	move_zero_2(arr, n);
	print(arr, n);
	return 0;
}