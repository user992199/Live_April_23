#include<iostream>
using namespace std;
int main(){
	int k = -1;
	bool x = 10;
	bool * y = & x;

	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	cout<<"&x: "<<&x<<endl;
	cout<<"&y: "<<&y<<endl;
	cout<<"*y: "<<*y<<endl;
	cout<<"x+1: "<<x+1<<endl;
	cout<<"&x-1: "<<&x-1<<endl;
	cout<<"y+1: "<<y+1<<endl;
	cout<<"*y+1: "<<*y+1<<endl;
	cout<<"&(*y): "<<&(*y)<<endl;

	cout<<"*(&x+1): "<<*(&x+1)<<endl;

	return 0;
}