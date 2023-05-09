#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// datatype identifier;
	string s;
	s = "hello";
	s[0] = 'y';
	cout<<s<<endl;	
	s = "hello \tmy name \nis \nshubhyank\n";
	cout<<s<<endl;

	string k = "hello";
	s = "hello";

	if(s == k){
		cout<<"true\n";
	}

	s = s + k;
	cout<<s<<endl;

	string l("this is a string"); // string l = "this is a string";
	cout<<l<<endl;
	return 0;
}