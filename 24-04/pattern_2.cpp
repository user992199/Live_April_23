#include<iostream>
using namespace std;
int main(){
	/*
		1
		0 1
		1 0 1
		0 1 0 1
		1 0 1 0 1
	*/
	int pattern_of = 1;
	int n = 10, fn = pattern_of;
	for(int ln = 1; ln <= n; ln++){
		int num = fn;
		for(int cn = 1; cn <= ln; cn++){
			cout<<num<<" ";
			num = pattern_of - num;
		}
		cout<<endl;
		fn = pattern_of - fn;
	}			
	return 0;
}