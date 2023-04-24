#include<iostream>
using namespace std;
int i = 100; // this variable has global scope
int main(){
	// scope of a variable
	int i = 10;
	{
		int i = 5;
		::i = 1000;
		::i++;
		cout<<"global i: "<<::i<<endl; // operator => scope resolution operator
		cout<<"in: "<<i<<endl;
	}
	cout<<"out: "<<i<<endl;
	return 0;
}