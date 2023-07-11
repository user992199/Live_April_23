#include<iostream>
#include<set>
#include<queue>
using namespace std;
int main(){
	set<int> s;
	priority_queue<int, vector<int>, greater<int>> q;
	s.insert(2); q.push(2);
	s.insert(1); q.push(1);
	s.insert(3); q.push(3);
	s.insert(8); q.push(8);
	s.insert(5); q.push(4);
	for(auto i: s){
		cout<<i<<" ";
	}
	cout<<endl;
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}