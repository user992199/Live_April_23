#include<iostream>
using namespace std;
void resize(int * &arr, int &s){
	cout<<"Doubling the size of array\n";
	int * a1 = new int[2*s];
	for(int i = 0; i < s; i++){
		a1[i] = arr[i];
	}
	delete []arr;
	arr = a1;
	s *= 2;
}
int main(){
	int s = 1; // total kitne elements abhi array mein ja skte hain
	int n = 0; // abhi tak kitne number array mein gye hain
	int * arr = new int[s];
	int input;
	while(true){
		cin>>input;
		if(input < 0) break;
		if(n == s){
			resize(arr, s);
		}
		arr[n] = input;
		n++;
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;

	int wait;
	cin>>wait;
	return 0;
}