#include<iostream>
using namespace std;
int main(){
	int arr[] = {5, 4, 3, 2, 1, 10, 9, 7, 5, 21, 10, -1, -5, -16, 10, 18, -3};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 1; i < n; i++){
		for(int j = i; j > 0; j--){
			if(arr[j] < arr[j-1]){
				swap(arr[j], arr[j-1]);
			}
			else{
				break;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}cout<<endl;
	return 0;
}