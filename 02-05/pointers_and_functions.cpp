#include<iostream>
using namespace std;

int* update(int* p){
	*p = 150;
	int b = 19;
	p = &b;
	return p;
}

int main(){
	int a = 15;
	int * aptr = &a;
	cout<<a<<endl;
	int * func = update(aptr); // update(&a);
	cout<<a<<endl;
	cout<<*aptr<<endl;
	cout<<func<<endl;
	return 0;
}