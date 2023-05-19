#include<iostream>
#include<cstring>
using namespace std;
void print_words(int n){
	string words[] = {"zero", "one", "two", "three", "four",
		"five", "six", "seven", "eight", "nine"
	};
	// base case
	if(n == 0) return;
	// recursive case
	int digit = n%10;
	n /= 10;
	print_words(n);
	cout<<words[digit]<<" ";
}
int main(){
	int i = 0;
	print_words(i);
	cout<<endl;
	return 0;
}