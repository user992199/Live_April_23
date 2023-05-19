#include<iostream>
#include<string>
using namespace std;
int string_to_int(string s){
	// base case
	if(s.size() == 0) return 0;
	// recursive case
	char digit = s.back();
	s.pop_back();
	return (string_to_int(s) * 10) + digit - '0';
	int num = string_to_int(s);
	num *= 10;
	num += digit - '0';
	return num;
}
int main(){
	string s = "2048";
	int i = string_to_int(s);
	cout<<i++<<endl;
	cout<<i<<endl;
	return 0;
}