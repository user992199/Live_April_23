#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s = "hello";
	cout<<s.back()<<endl;
	s.push_back('k');
	cout<<s<<endl;

	string m = "bye";
	s.append(m);
	cout<<s<<endl;

	cout<<s.substr(3)<<endl;
	// in substr(starting index, number of characters);
	cout<<s.substr(3, 4)<<endl;

	string a = "apple";
	string b = "app";

	if(a < b){
		cout<<a<<endl;
	}else{
		cout<<b<<endl;
	}

	string num = "183";
	int k = 100 + stoi(num);
	cout<<k<<endl;
	cout<<a.length()<<endl;
	cout<<a.size()<<endl;

	string t;
	if(t.empty()){
		cout<<"string is empty\n";
	}
	return 0;
}