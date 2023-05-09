#include<iostream>
using namespace std;
int main(){
	int n = 10;
	int &k = n;
	n++;
	cout<<k<<endl;
	return 0;
}