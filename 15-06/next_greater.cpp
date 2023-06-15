n#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> next_greater(int arr[], int n){
	vector<int> ng(n);
	stack<int> s;
	for(int i = n-1; i >= 0; i--){
		while(!s.empty() and s.top() <= arr[i]){
			s.pop();
		}
		if(s.empty()){
			ng[i] = -1;
		}else{
			ng[i] = s.top();
		}
		s.push(arr[i]);
	}
	return ng;
}
void print(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[] = {3, 5, 2, 4, 7, 1, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> ng = next_greater(arr, n);
	print(ng);
	return 0;
}