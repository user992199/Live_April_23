#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
    // cout<<v[0]<<endl;
    v.reserve(2);
    v.reserve(3);
    for(int i = 0; i < 10; i++){
        v.push_back(1);
        cout<<"#############\n";
        cout<<"size: "<<v.size()<<endl;
        cout<<"cap: "<<v.capacity()<<endl;
    }
    for(int i = 0; i < 10; i++){
        v.pop_back();
        cout<<"#############\n";
        cout<<"size: "<<v.size()<<endl;
        cout<<"cap: "<<v.capacity()<<endl;
    }
	return 0;
}