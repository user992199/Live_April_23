#include<iostream>
using namespace std;
void catalan(int n, char *out, int &count, int o = 0, int c = 0, int i = 0){
	// base case
	if(i == 2 * n){ // (o == n and c == n)
		out[i] = '\0';
		// cout<<out<<endl;
		count++;
		return;
	}
	// recursive case
	if(o < n){
		out[i] = '(';
		catalan(n, out, count, o + 1, c, i + 1);
	}
	if(c < o){
		out[i] = ')';
		catalan(n, out, count, o, c + 1, i + 1);
	}
}
int main(){
	int n = 20;
	char out[10000] = "";
	for(int i = 0; i <= n; i++){
		int count = 0;
		catalan(i, out, count);
		cout<<count<<endl;
	}
	return 0;
}