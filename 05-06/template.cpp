#include<iostream>
using namespace std;
// template <typename identifier>
template <typename type>
class c1{
public:
	type a, b, c;
};
int main(){
	c1<int> obj;
	obj.a = 87;
	obj.b = 88;
	obj.c = 78;
	cout<<obj.a<<" "<<obj.b<<" "<<obj.c<<endl;
	return 0;
}