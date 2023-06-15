#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;

void print_arr(int * v, int n){
	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}

void print_vec(vector<int> v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
int largest(int arr[], int n){
	vector<int> ns(n), ps(n);
	stack<int> s;
	for(int i = 0; i < n; i++){
		while(!s.empty() and arr[s.top()] >= arr[i]){
			s.pop();
		}
		if(s.empty()){
			ps[i] = -1;
		}else{
			ps[i] = s.top();
		}
		s.push(i);
	}
	while(s.size()){
		s.pop();
	}
	for(int i = n-1; i >= 0; i--){
		while(!s.empty() and arr[s.top()] >= arr[i]){
			s.pop();
		}
		if(s.empty()){
			ns[i] = n;
		}else{
			ns[i] = s.top();
		}
		s.push(i);
	}
	int ans = INT_MIN;
	cout<<"ps: ";
	print_vec(ps);
	cout<<"ns: ";
	print_vec(ns);
	cout<<"area: ";
	for(int i = 0; i < n; i++){
		int area = arr[i] * (ns[i] - ps[i] - 1);
		cout<<area<<" ";
		ans = max(ans, area);
	}
	cout<<endl;
	return ans;
}
int main(){
	int arr[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"ar: ";
	print_arr(arr, n);
	cout<<largest(arr, n)<<endl;
	return 0;
}