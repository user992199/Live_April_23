#include<iostream>
using namespace std;

void print(double *arr, int n){ // arr[]
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" / "<<*(arr+i)<<endl;
	}
}

int main(){
	double arr[] = {-1.23, 12, 3.3333333333, 4, 5.123};
	int n = sizeof(arr)/sizeof(arr[0]);
	// cout<<*arr<<endl<<endl;

	// cout<<*(arr+1)<<endl;
	// cout<<arr[1]<<endl;
	print(arr+3, n);

	// cout<<(&arr[0]) - (&arr[4])<<endl;

	// cout<<sizeof(&arr[0])<<endl;
	// cout<<sizeof(arr)<<endl;
	// cout<<*(arr+1)<<endl;
	// cout<<*((&arr[0]) + 1)<<endl;
	// cout<<*((&arr[1]))<<endl;
	return 0;
}