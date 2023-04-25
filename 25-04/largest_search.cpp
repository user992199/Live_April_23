#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int largest = INT_MIN;
	for(int i = 0; i < n; i++){
		if(largest < arr[i]){
			largest = arr[i];
		}
	}
	cout<<"Largest Input Given is: ";
	cout<<largest<<endl;
	return 0;
}