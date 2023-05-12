#include<iostream>
using namespace std;
bool check_spec_char(char arr){
	if(arr >= 'a' and arr <= 'z') return false;
	if(arr >= 'A' and arr <= 'Z') return false;
	if(arr >= '0' and arr <= '9') return false;
	return true;
}
void create_token(char * in, char (*tl)[100], int s, int e, int tn){
	char token[100];
	int i = 0;
	for(i = 0; i <= (e-s); i++){
		token[i] = in[s + i];
	}
	token[i] = '\0';
	strcpy(tl[tn], token);
}
int tokenizer(char * inp, char (*tl)[100]){
	int s = 0, tn = 0, i = 0;
	for(; inp[i] != '\0'; i++){
		if(check_spec_char(inp[i])){
			create_token(inp, tl, s, i-1, tn);
			s = i+1;
			tn++;
		}
	}
	if(check_spec_char(inp[i])){
		create_token(inp, tl, s, i-1, tn);
		s = i+1;
		tn++;
	}
	return tn;
}
int main(){
	char inp[200];
	cin.getline(inp, 200);
	char token_list[100][100];
	cout<<tokenizer(inp, token_list)<<endl;
	return 0;
}