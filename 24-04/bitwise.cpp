#include<iostream>
using namespace std;
int main(){
	int a = 5, b = 9;
	cout<<a<<" & "<<b<<" => "<<(a&b)<<endl;
	cout<<a<<" | "<<b<<" => "<<(a|b)<<endl;
	cout<<"~"<<a<<" => "<<(~a)<<endl;
	cout<<"~"<<b<<" => "<<(~b)<<endl;
	cout<<a<<" ^ "<<b<<" => "<<(a^b)<<endl;
	cout<<a<<" << "<<b<<" => "<<(a<<b)<<endl;
	cout<<a<<" >> "<<b<<" => "<<(a>>b)<<endl;
	return 0;
}