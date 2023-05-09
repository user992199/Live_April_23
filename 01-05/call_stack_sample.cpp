#include<iostream>
using namespace std;
void fb(){
	cout<<"fb\n";
}
void fa(){
	cout<<"fa\n";
	fb();
	cout<<"fa\n";
}
int main(){
	cout<<"Main\n";
	fa();
	cout<<"Main\n";
	return 0;
}