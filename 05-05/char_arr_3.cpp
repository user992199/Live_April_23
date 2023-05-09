#include<iostream>
using namespace std;
void capitalize(char * arr){
	for(int i = 0; arr[i] != '\0'; i++){
		if(arr[i] >= 'a' and arr[i] <= 'z'){
			arr[i] -= 'a' - 'A';
		}
	}
}
int main(){
	char arr[] = "hello everyone\0 will not be printed";
	cout<<arr<<endl;
	capitalize(arr);
	cout<<arr<<endl;
	for(int i = 0; i < sizeof(arr); i++){
		cout<<arr[i];
	}cout<<endl;
	return 0;
}