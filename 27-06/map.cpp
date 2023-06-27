#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string, int> m;
	m["Pineapple"] = 10;
	m["Banana"] = 10;
	m["Kiwi"] = 10;
	m["Aapple"] = 10;
	m["Abpple"] = 10;
	for(auto f : m){
		cout<<f.first << " " << f.second << endl;
	}
	for(auto f = m.begin(); f != m.end(); f++){
		cout<<f -> first << " " << f -> second << endl;
	}
	return 0;
}