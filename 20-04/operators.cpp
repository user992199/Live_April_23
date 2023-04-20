#include<iostream>
using namespace std;
int main(){
	// int a = -10;
	// cout<< a <<endl;
	// long b = -a;
	// cout<<b<<endl;

	int a = 9;
	int b = 10;
	int c = 3;
	int d = 5;

	// cout<< a + b << endl;
	// cout<< a - b << endl;
	// cout<< a * b << endl;
	// cout<< a / b << endl;
 	

 	// modulo // modulus // mod
	cout << a % b <<endl; // 9/10 	=> 	9 = 10 * 0 + 9
	cout << a % c <<endl; // 9/3 	=> 	9 = 3 * 3 + 0
	cout << a % d <<endl; // 9/5 	=> 	9 = 5 * 1 + 4

	cout << a + b * c - d / a <<endl;
	cout << (a + b) * (c - d) / a <<endl;
	cout << ((a + b) * c - d) / a <<endl;

	/*
	Relational Operators
	= :- assignment

	a = 10, b = 5
	== 	:- 	a == b 	=> 	kya a aur b equal hai? 				false	equal
	!= 	:- 	a != b 	=> 	kya a aur b unqeual hain?			true	not equal
	> 	:- 	a > b 	=> 	kya a bada hai b se?				true	greater
	< 	:- 	a < b 	=> 	kya a chota hai b se?				false	less
	>=  :- 	a >= b 	=> 	kya a bada ya barabar hai b ke?		true	greater or equal
	<= 	:- 	a <= b 	=> 	kya a chota ya barabar hai b ke?	false	lesser or equal

	*/

	/*

	Logical Operators 

	a = 10, b = 5
	&&	- and - (cond1 and cond2) - a > 5 and b > 0 - True
	||	- or  - (cond1 or cond2)  - a > 7 or  b > 7 - True
	!	- not - (!cond1)          - !(a < 7) - True

	*/
	return 0;
}