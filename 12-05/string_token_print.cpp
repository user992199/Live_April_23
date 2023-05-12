#include<iostream>
using namespace std;
bool check_spec_char(char arr){
	if(arr >= 'a' and arr <= 'z') return false;
	if(arr >= 'A' and arr <= 'Z') return false;
	if(arr >= '0' and arr <= '9') return false;
	return true;
}
void token_print(char * arr){
	for(int i = 0; arr[i] != '\0'; i++){
		if(check_spec_char(arr[i])){
			cout<<endl;
			while(check_spec_char(arr[i])){
				i++;
			}
		}
		cout<<arr[i];
	}
	cout<<endl;
}
int main(){
	char inp[200];
	cin.getline(inp, 200);
	token_print(inp);
	return 0;
}