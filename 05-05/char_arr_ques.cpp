#include<iostream>
#include<cstring>
using namespace std;
int length(char * arr){
	int i = 0;
	while(arr[i]){
		i++;
	}
	return i;
}
void capitalize(char * arr){
	for(int i = 0; arr[i] != '\0'; i++){
		if(islower(arr[i])){
			arr[i] -= 'a' - 'A';
		}
	}
}
bool is_palindrome(char * arr){
	int s = 0, e = length(arr) - 1;
	char copy[e+2];
	strcpy(copy, arr);
	capitalize(copy);
	cout<<copy<<endl;
	while(s < e){
		if(copy[s] != copy[e]) return false;
		s++;
		e--;
	}
	return true;
}
int main(){
	char arr[] = "Hello count length";
	cout<<length(arr)<<endl;
	cout<<strlen(arr)<<endl;
	char p[] = "Naman";
	is_palindrome(p) ? cout<<"Palin"<<endl : cout<<"Non\n" ;
	cout<<p<<endl;
	return 0;
}