#include<iostream>
#include<cstring>
using namespace std;
string int_to_string(int n){
	if(n == 0) return "0";
	string k;
	int c = n;
	if(c < 0) c *= -1;
	while(c){
		char ch = ((c%10) + '0');
		k = ch + k;
		// cout<<c<<" "<<ch<<endl;
		c /= 10;
	}
	if(n < 0){
		k = '-' + k;
	}
	return k;
}
string func(string s){
	string k;
	for(int i = 0; i < s.length()-1; i++){
		k += s[i];
		// cout<<s[i];
		int diff = s[i+1] - s[i];
		// cout<<diff;
		k += int_to_string(diff);
	}
	k += s.back();
	// cout<<s.back();
	// cout<<endl;
	return k;
}
int main(){
	string s = "zahello";
	s = func(s);
	cout<<s<<endl;
	return 0;
}