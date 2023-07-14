#include<iostream>
#include<climits>
using namespace std;
class node{
public:
	node * left; // 0
	node * right; // 1
	int number;
	node(){
		left = 0;
		right = 0;
		number = -1;
	}
};
class trie{
public:
	node * root;
	trie(){
		root = new node();
	}
	void insert(int n){
		node * temp = root;
		for(int i = 31; i >= 0; i--){
			int bit = n & (1 << i);
			if(bit){
				if(!(temp -> right)){
					temp -> right = new node();
				}
				temp = temp -> right;
			}else{
				if(!(temp -> left)){
					temp -> left = new node();
				}
				temp = temp -> left;
			}
		}
		temp -> number = n;
	}
	int max_xor_helper(int n){
		node * temp = root;
		for(int i = 31; i >= 0; i--){
			int bit = n & (1 << i);
			if(bit){
				if(temp -> left) temp = temp -> left;
				else temp = temp -> right;
			}
			else{
				if(temp -> right) temp = temp -> right;
				else temp = temp -> left;
			}
		}
		return n ^ (temp -> number);
	}
	int max_xor(int arr[], int n){
		int ans = INT_MIN;
		for(int i = 0; i < n; i++){ // n iteration
			insert(arr[i]); // 32 iteration -> O(1)
			ans = max(ans, max_xor_helper(arr[i])); // 32 iteration -> O(1)
		}
		return ans;
	}
};
int main(){
	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr)/sizeof(arr[0]);
	trie t;
	cout<<t.max_xor(arr, n)<<endl;
	return 0;
}