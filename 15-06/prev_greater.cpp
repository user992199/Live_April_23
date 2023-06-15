#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> prev_greater(int arr[], int n){
	vector<int> pg(n);
	stack<int> s;
	for(int i = 0; i < n; i++){
		while(!s.empty() and s.top() <= arr[i]){
			s.pop();
		}
		if(s.empty()){
			pg[i] = -1;
		}else{
			pg[i] = s.top();
		}
		s.push(arr[i]);
	}
	return pg;
}
void print(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[] = {3, 5, 2, 4, 7, 1, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> pg = prev_greater(arr, n);
	print(pg);
	return 0;
}