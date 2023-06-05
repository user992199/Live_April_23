#include<iostream>
#include<vector>
using namespace std;
int main(){
	// vector<datatype> iden(number of buckets, data);
	// vector<vector<int> > v;
	// // 0 index row and 0 index col
	// vector<int> row;
	// v.push_back(row);
	// v.push_back(vector<int> ());
	// v[0].push_back(-10);
	// cout<<v[0][0]<<endl;
	int row = 4, col = 5;
	int data = 6;
	vector<vector<int> > v(row, vector<int> (col, data));
	vector<vector<int> > v2(4, vector<int> (5, 6));
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<v[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}