#include<iostream>
using namespace std;
int main(){
	int i = 1, n = 10;
	while(i <= n){
		if(i == 5){
			break;
		}
		cout<<i<<" ";
		i++;
	}
	cout<<endl<<i<<endl;
	return 0;
}