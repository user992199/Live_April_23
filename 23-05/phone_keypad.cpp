#include<iostream>
#include<cstring>
using namespace std;
void print_all(string str, string out = ""){
	char keypad[10][5] = {
		"", "", "abc", "def",
		"ghi", "jkl", "mno",
		"pqrs", "tuvw", "xyz"
	};
	// base case
	if(str == ""){
		cout<<out<<endl;
		return;
	}
	// recursive case
	int key = str[0] - '0';
	if(key == 1 or key == 0){
		print_all(str.substr(1, str.size()-1), out);
	}
	for(int i = 0; keypad[key][i] != '\0'; i++){
		out.push_back(keypad[key][i]);
		print_all(str.substr(1, str.size()-1), out);
		out.pop_back();
	}
}
int main(){
	string str = "78";
	print_all(str);
	return 0;
}