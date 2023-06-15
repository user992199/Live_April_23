#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> stock_span(int arr[], int n){
	vector<int> pg(n);
	stack<int> s;
	for(int i = 0; i < n; i++){
		while(!s.empty() and arr[s.top()] <= arr[i]){
			s.pop();
		}
		if(s.empty()){
			pg[i] = i + 1;
		}else{
			pg[i] = i - s.top();
		}
		s.push(i);
	}
	return pg;
}
void print_vec(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
void print_arr(int * v, int n){
	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[] = {3, 5, 2, 4, 7, 1, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> pg = stock_span(arr, n);
	print_arr(arr, n);
	print_vec(pg);
	return 0;
}