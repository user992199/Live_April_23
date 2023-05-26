#include<iostream>
using namespace std;
int main(){
	int * ptr = new int;
	*ptr = 10;
	cout<<ptr<<" -> "<<*ptr<<endl;
	delete ptr;
	cout<<ptr<<" -> "<<*ptr<<endl;
	ptr = new int;
	*ptr = 9;
	cout<<ptr<<" -> "<<*ptr<<endl;

	delete ptr;
	ptr = new int[10];
	ptr[0] = 0;
	cout<<ptr[0]<<endl;
	// to delete dynamically allocated array
	// delete []pointer_identifier/address;
	for(int i = 0; i < 10; i++){
		ptr[i] = i*i;
		cout<<ptr[i]<<" ";
	}cout<<endl;
	delete []ptr;
	for(int i = 0; i < 10; i++){
		ptr[i] = i*i;
		cout<<ptr[i]<<" ";
	}cout<<endl;
	return 0;
}