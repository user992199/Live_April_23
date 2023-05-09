#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2 ,3 , 4, 5};
	int *ptr = &arr[0];
	cout<<arr<<endl;
	cout<<arr+1<<endl<<endl;

	cout<<&arr<<endl;
	cout<<&arr+2<<endl<<endl;

	cout<<&ptr<<endl;
	cout<<&ptr+1<<endl;

	ptr = arr;
	ptr++;
	return 0;
}