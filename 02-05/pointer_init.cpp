#include<iostream>
using namespace std;
int main(){

	int * rptr = 0;

	int radius = 7;
	rptr = & radius;

	cout << 2 * 22 * (*rptr) / 7 << endl; // logical error
	cout<<rptr<<endl;
	return 0;
}