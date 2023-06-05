#include<iostream>
#include<vector>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		if(i%10 == 0) cout<<endl;
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void print_v(vector<int> &arr){
	for(int i = 0; i < arr.size(); i++){
		if(i % 10 == 0) cout<<endl;
		cout<<arr[i]<<" ";
	}cout<<endl;
}
bool comparator_smaller(int a, int b){
	return a%10 < b%10;
}
bool comparator_greater(int a, int b){
	return a%10 > b%10;
}

int main(){
	// int arr[] = {12, 18, 65, 24, 85, 28, 59, 50, 10};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// print(arr, n);
	// // sort(starting address, ending address, comparator)
	// sort(arr, arr+n, comparator_smaller);
	// print(arr, n);
	vector<int> v;
	int n = 100;
	for(int i = 0; i < n; i++){
		v.push_back(n-i);
	}
	print_v(v);
	sort(&v, &v + v.size()-1);
	sort(v.begin(), v.end(), comparator_smaller);
	print_v(v);
	return 0;
}