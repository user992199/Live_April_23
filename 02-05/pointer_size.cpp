#include<iostream>
using namespace std;
int main(){
	bool b;
	int i;
	double d;
	cout<<"b: "<<sizeof(b)<<" "<<sizeof(&b)<<endl;
	cout<<"i: "<<sizeof(i)<<" "<<sizeof(&i)<<endl;
	cout<<"d: "<<sizeof(d)<<" "<<sizeof(&d)<<endl;
	return 0;
}