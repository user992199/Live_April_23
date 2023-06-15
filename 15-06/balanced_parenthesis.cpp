#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
bool balanced(string str){
	stack<char> stk;
	for(int i = 0; i < str.size(); i++){
		char cc = str[i];
		if(cc == '{' or cc == '(' or cc == '['){
			stk.push(cc);
		}
		else{
			if(stk.empty()) return false;
			if(	(cc == ']' and stk.top() == '[') or
				(cc == '}' and stk.top() == '{') or 
				(cc == ')' and stk.top() == '(')){
				stk.pop();
			}
			else{
				return false;
			}
		}
	}
	return stk.empty();
}
int main(){
	string s = "([[]]{}{()})))";
	if(balanced(s)){
		cout<<"All is well\n";
	}else{
		cout<<"Time to run\n";
	}
	return 0;
}