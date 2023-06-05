#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
	vector<pair<int, int> > v;
	int n = 10;
	for(int i = 0; i < n; i++){
		v.push_back(make_pair(i, n-i-1));
	}
	for(int i = 0; i < n; i++){
		cout<<v[i].first<<", "<<v[i].second<<endl;
	}
	return 0;
}