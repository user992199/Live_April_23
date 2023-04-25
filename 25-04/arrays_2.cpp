#include<iostream>
using namespace std;
int main(){
	int a1[10] = {0};
	int a2[10] = {0};
	for(int i = 0; i < 10; i++){
		cout<<a1[i]<<" ";
	}cout<<endl;
	a2[15] = 100;
	for(int i = 0; i < 10; i++){
		cout<<a1[i]<<" ";
	}cout<<endl;
	a1[3] = 10;
	cout<<a2[15]<<endl;
	return 0;
}