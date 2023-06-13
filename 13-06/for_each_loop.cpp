#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	for(int i = 1; i <= 10; i++){
		l.push_back(i);
	}
	// for each loop
	// syntax
	// for(datatype identifier: container_ka_identifier)
	for(int &a: l){
		a++;
		cout<<a<<" ";
	}
	cout<<endl;
	for(int a: l){
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}