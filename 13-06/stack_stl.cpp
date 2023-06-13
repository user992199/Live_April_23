#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
	while(s.size()){ // !s.empty()
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	stack<int> s;
	for(int i = 0; i < 5; i++){
		cout<<i+1<<" ";
		s.push(i+1);
	}
	cout<<endl;
	// s.clear();
	print(s);
	cout<<s.size()<<endl;
	return 0;
}