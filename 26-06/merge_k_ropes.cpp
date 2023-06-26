#include<iostream>
#include<queue>
#define min_heap priority_queue<int, vector<int>, greater<int>>
using namespace std;
int min_cost(int * arr, int n){
	min_heap h;
	for(int i = 0; i < n; i++) h.push(arr[i]);
	int ans = 0;
	while(h.size() > 1){
		int f = h.top(); h.pop();
		int s = h.top(); h.pop();
		int sum = f+s;
		ans += sum;
		h.push(sum);
	}
	return ans;
}
int main(){
	int arr[] = {7, 5, 4, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<min_cost(arr, n)<<endl;
	return 0;
}