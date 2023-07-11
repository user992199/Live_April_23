#include<iostream>
#include<set>
#include<utility>
using namespace std;
int main(){
	set<pair<int, int>> s;
	s.insert({2, -2});
	s.insert({1, -1});
	s.insert({3, -4});
	s.insert({8, -5});
	// s.insert({5, -3});
	// s.insert({5, 3});
	// s.insert({5, 234});
	// s.insert({-5, 234});
	// s.insert({-5, 234});
	// s.insert({5, 31});
	s.insert({5, 0});
	for(auto i: s){
		cout<<i.first<<" "<<i.second<<"\n";
	}
	auto address = s.find({8, -5});
	address == s.end() ? cout<<"not found\n" : 
		cout<<"found: "<<address -> first<<" "<<address -> second<<endl;
	s.erase(address);
	s.insert({8, 5});
	for(auto i: s){
		cout<<i.first<<" "<<i.second<<"\n";
	}
	return 0;
}