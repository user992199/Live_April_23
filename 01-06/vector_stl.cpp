#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<"v["<<i<<"] = "<<v[i]<<endl;
	}
}
int main(){
	// syntax for vector
	// vector<datatype> identifier;
	// vector<int> v;
	// v.push_back(19);
	// v.push_back(89);
	// v.push_back(63);
	// v.push_back(40);

	// v[2] = 100000;

	// syntax for init
	// vector<dt> iden(number of buckets, initializing value);
	vector<int> v(220, 6);
	// vector<int> v(10);

	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();

	// print(v);

	vector<int> v2a({1, 2, 3, 4, 5, 6, 7});
	vector<int> v2b = {1, 2, 3, 4, 5, 6, 7};
	// print(v2b);

	vector<int> v3a(v2a);
	vector<int> v3b = v2b;
	vector<int> v4;

	cout<<v.size()<<endl;
	cout<<v2a.size()<<endl;
	cout<<v4.size()<<endl;
	cout<<sizeof(v)<<endl;
	cout<<sizeof(v2a)<<endl;
	cout<<sizeof(v4)<<endl;

	vector<long double> dv;
	vector<bool> bv1;
	vector<bool> bv2;

	cout<<sizeof(dv)<<" "<<sizeof(bv1)<<" "<<sizeof(bv2)<<endl;

	return 0;
}