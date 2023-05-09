#include<iostream>
#include<cstring>
using namespace std;
void update(char * a1, char * a2){
	int i = 0;
	while(a2[i]){
		a1[i] = a2[i];
		i++;
	}
	a1[i] = '\0';
}
int main(){
	char arr[10] = "Welcome";
	cout<<arr<<endl;
	strcpy(arr, "Bhag ja yahan se");
	cout<<arr<<endl;
	char * a2 = "Hello";
	cout<<a2<<endl;
	a2[0] = 'Y';
	cout<<a2<<endl;
	return 0;
}