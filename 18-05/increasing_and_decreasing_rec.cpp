#include<iostream>
using namespace std;
void decreasing(int n){
	// base case
	if(n == 0){
		cout<<endl;
		return;
	}
	// recursive case
	cout<<n<<" ";
	decreasing(n-1);
}
void increasing(int n){
	// base case
	if(n == 0) return;
	// recursive case
	increasing(n-1);
	cout<<n<<" ";
}
int main(){
	int n = 100;
	decreasing(n);
	increasing(n);
	cout<<endl;
	return 0;
}