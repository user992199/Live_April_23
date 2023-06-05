#include<iostream>
#include<utility>
using namespace std;
int main(){
	// syntax 
	// pair<datatype, datatype> identifier;
	pair<int, int> p(10, 13);
	pair<int, int> p2(p);
	pair<int, int> p3 = make_pair(19, 20);
	pair<int, int> p4(make_pair(19, 20));
	// p.first = 10;
	// p.second = 13;
	cout<<p4.first<<endl;
	cout<<p4.second<<endl;

	return 0;
}