#include<iostream>
using namespace std;
int main(){
	// Init 1
	int arr[5] = {-2, 8, 3, -10, 5};
	cout<<"Array 1: ";
	for(int i = 0; i < 5; i++){
		// cout<<arr[i]<<" ";
	}
	cout<<endl;

	// Init 2
	cout<<"Array 2: ";
	int second[] = {17, -100, 52, -10, -11, 64, 5};
	int n = sizeof(second)/sizeof(second[0]);
	for(int i = 0; i < n; i++){
		// cout<<second[i]<<" ";
	}
	cout<<endl;
	cout<<"Number of buckets in the second array: "<<n<<endl;

	// Init 3
	cout<<"Array 3: ";
	int third[1000] = {5};
	n = sizeof(third)/sizeof(third[0]);
	for(int i = 0; i < n; i++){
		// cout<<third[i]<<" ";
	}
	cout<<endl;

	double doub[1000000];
	return 0;
}