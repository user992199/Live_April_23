#include<iostream>
using namespace std;
bool check_valid(int * books, int n, int m, int page){
	int cc = page;
	int cs = 1;
	for(int i = 0; i < n; i++){
		if(page < books[i]) return false;
		if(cc >= books[i]){
			cc -= books[i];
		}
		else{
			if(cs == m) return false;
			else{
				cc = page - books[i];
				cs++;
			}
		}
	}
	return true;
}
int allocate(int * books, int n, int m){
	int start = INT_MIN, end = 0;
	for(int i = 0; i < n; i++){
		start = max(start, books[i]);
		end += books[i];
	}
	int ans = end;
	while(start <= end){
		int mid = (start + end)/2;
		if(check_valid(books, n, m, mid)){
			ans = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return ans;
}
int main(){
	int books[] = {38, 30, 50, 40};
	int n = sizeof(books)/sizeof(books[0]);
	int m = 3;
	cout<<allocate(books, n, m)<<endl;
	return 0;
}