#include<iostream>
using namespace std;
int main(){
	// int a = 10;
	// int * aptr;
	// aptr = &a;
	// cout<<&a<<endl;
	// cout<<aptr<<endl;
	// (*aptr)++;
	// *aptr = -88;
	// int b = *aptr;
	// cout<<a<<endl;
	// cout<<b<<endl;
	// cout<<*aptr<<endl;

	int b = 10;
	int * a = &b;

	int &aptr = *a;

	aptr++;
	cout<<b<<endl;

	int * k1, * k2, * k3, k4, *k5;
	k3 = &b;
	cout<<k3<<endl;
	k4 = b;

	int * kptr = &b;
	return 0;
}