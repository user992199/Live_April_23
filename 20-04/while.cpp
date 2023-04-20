#include<iostream>
using namespace std;
int main(){
	/* 
	
	while(condition){
		task
	}
	
	while -> loop

	and loop always have 3 part
	thus while effectively has 3 parts

	initialize a counter
	while(condtion){  <	 -	-
		task				^
		update the counter	|
	} - - - - - - - - - - - > 

	*/

	int a = 1;
	while( a <= 10 ){
		cout<<a<<" ";
		a = a + 1;
	}
	cout<<endl<<"a: "<<a<<endl;
	cout<<"End of the line\n";
	return 0;
}