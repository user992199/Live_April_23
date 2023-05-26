#include<iostream>
using namespace std;
int main(){
	int * ptr = NULL;
	int n = 10;
	ptr = new int[n];
	// int a = 10;
	// ptr = &a;
	cout<<"size of array: "<<sizeof(ptr)<<endl;
	for(int i = 0; i < n; i++){
		ptr[i] = i+1;
		// cout<<*(ptr+i)<<" ";
		cout<<ptr[i]<<" ";
	}cout<<endl;
	return 0;
}