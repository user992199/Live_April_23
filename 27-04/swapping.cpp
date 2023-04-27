#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int b = 5;
	int c;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	// Method 1
	// c = a;
	// a = b;
	// b = c;
	// Method 2
	// a = a+b;
	// b = a-b;
	// a = a-b;
	// Method 3
	// a = ( a + b ) - ( b = a );
	// Method 4
	swap(a, b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	return 0;
}