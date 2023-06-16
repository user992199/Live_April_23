#include<iostream>
#include<queue>
using namespace std;
int main(){
	int freq[130] = {0};
	char ch;
	cin>>ch;
	queue<char> q;
	while(ch != '$'){
		freq[ch]++;
		if(freq[ch] == 1){
			q.push(ch);
		}
		while(!q.empty() and freq[q.front()] > 1){
			q.pop();
		}
		q.empty() ? cout<<"-1 " : cout<<q.front()<<" ";
		cin>>ch;
	}
	return 0;
}