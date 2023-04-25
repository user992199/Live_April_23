#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int ln = 1; ln <= n; ln++){
		char ch = 'A';
		for(; ch < 'A' + n - ln + 1; ch++){
			cout<<ch;
		}
		ch--;
		for(; ch >= 'A'; ch--){
			cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}