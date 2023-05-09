#include<iostream>
using namespace std;
int main(){
	char ch1 = '\n';
	char ch2 = 'b';
	char ch3 = 'c';
	char * chptr1 = &ch1;
	char * chptr2 = &ch2;
	char * chptr3 = &ch3;

	cout<<&ch1<<endl;
	cout<<chptr1<<endl<<endl;

	cout<<&ch2<<endl;
	cout<<chptr2<<endl<<endl;

	cout<<&ch3<<endl;
	cout<<chptr3<<endl<<endl;

	// fooling of compiler
	// fancy phrase for address typecasting
	cout<<*((int*)&ch1)<<endl;
	cout<<((void*)&ch1)<<endl;
	cout<<*((bool*)&ch1)<<endl;
	return 0;
}