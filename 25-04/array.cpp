#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	// int index_no = 0;
	// cin>>arr[index_no];
	// index_no++; // 0 + 1
	// cin>>arr[index_no]; // 1
	// index_no++; // 1 + 1
	// cin>>arr[index_no]; // 2
	// index_no++; // 2 + 1
	// cin>>arr[index_no]; // 3
	// index_no++; // 3 + 1
	// cin>>arr[index_no]; // 4
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	for(int i = 0; i < n; i++){
		cout<<"Enter variable #"<<i<<": ";
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}