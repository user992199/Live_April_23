#include<iostream>
using namespace std;
int main(){
	char arr[5];
	arr[0] = 'h';
	arr[1] = 'e';
	arr[2] = 'l';
	arr[3] = 'l';
	arr[4] = 'o';
	char a2[] = {'y', 'e', 'l', 'l', 'o', '\0'};
	cout<<a2<<endl;
	for(int i = 0; i < 5; i++){
		cout<<arr[i];
	}cout<<endl;

	cout<<&arr[0]<<endl;	
	cout<<arr<<endl;

	char a3[] = "Windows"; // by default '\0' is added at the end;
	cout<<sizeof(a3)<<endl;
	cout<<sizeof("Hello")<<endl;
	cout<<a3<<endl;


	char ch = 'h';
	if(ch == 'h'){
		cout<<"not poss\n";
	}
	return 0;
}