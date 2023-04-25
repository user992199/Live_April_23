#include<iostream>
using namespace std;
int main(){
	int arr[] = {10, 9, 1, 5, 2, 7, 8, 4, 3, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key;
	cout<<"Enter the value of key: ";
	cin>>key;
	int i;
	for(i = 0; i < n; i++){
		if(key == arr[i]){
			break;
		}
	}
	if(i == n){
		cout<<"Key not found\n";
	}else{
		cout<<"Key found at pos: "<<i+1<<endl;
	}
	return 0;
}