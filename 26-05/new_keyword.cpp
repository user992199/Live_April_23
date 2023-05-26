#include<iostream>
using namespace std;
int main(){
	int * ptr = NULL;
	ptr = new int;
	*ptr = 100;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	char *chptr = new char;
	*chptr = 'H'; 
	cout<<chptr<<endl;
	cout<<*chptr<<endl;
	return 0;
}