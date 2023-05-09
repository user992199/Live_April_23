#include<iostream>
using namespace std;
int main(){
	int i = 0, j = 6;
	if(i < 5){
		if(j < 5){
			cout<<"less less\n";
		}else{
			cout<<"less not less\n";
		}
	}else{
		cout<<"not less\n";
	}
	i < 5 ? j < 5 ? cout<<"less less\n" : cout<<"less not less\n" : cout<<"not less\n" ;
	return 0;
}