#include<iostream>
using namespace std;

// function declaration 
// forward declaration
void func_a();
int sum(int, int, int);

int main(){
	int a = 10, b = 15, c = 20;
	cout<<"returned value: "<<sum(c, b, a)<<endl;
	func_a();
	return 0;
}

// function definition
void func_a(){
	cout<<"func a\n";
	cout<<"after ret\n";
	return;
}
int sum(int a, int b, int c){
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"c: "<<c<<endl;
	// return a + b + c;
}