#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	for(int i = 1; i <= 10; i++){
		l.push_back(i);
	}
	
	for(list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout<<(*it)<<" ";
	}
	cout<<endl;
	for(list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); it++){
		cout<<(*it)<<" ";
	}
	cout<<endl;
	return 0;
}