#include<iostream>
using namespace std;
int main(){
	/*
	for(initialization; condition check; updation){
		task;
	}
	*/
	int i = 1;
	for(;;){
		if(i > 10) {
			break;
		}
		cout<<i<<" ";
		i++;
	}
	cout<<endl;
	for(int i = 1; i <= 10; i++){
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i = 1, j = 1; i <= 10 and j <= 10; i+=2, j*=2){
		cout<<"i: "<<i<<"; ";
		cout<<"j: "<<j<<endl;
	}
	return 0;
}