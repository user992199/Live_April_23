#include<iostream>
using namespace std;
void init_2d_arr(int arr[][1000], int r, int c){
	int v = 1;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = (i * c) + j + 1;
			// arr[i][j] = v;
			// v++;
		}
	}
}
void row_major_print(int arr[][1000], int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout<<arr[i][j]<<"\t";
		}cout<<endl;
	}cout<<endl;
}
void col_major_print(int arr[][1000], int r, int c){
	for(int i = 0; i < c; i++){
		for(int j = 0; j < r; j++){
			cout<<arr[j][i]<<"\n";
		}cout<<endl;
	}cout<<endl;
}
int main(){
	int arr[1000][1000]; // 10^6
	// [1000][1000]
	// [100][10000]
	// [10][100000]
	// [1][1000000]
	int r = 3, c = 10;
	init_2d_arr(arr, r, c);
	row_major_print(arr, r, c);
	col_major_print(arr, r, c);
	return 0;
}