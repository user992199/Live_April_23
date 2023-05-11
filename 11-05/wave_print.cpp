#include<iostream>
using namespace std;
void init_2d_arr(int arr[][1000], int r, int c){
	int v = 1;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = (i * c) + j + 1;
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
void wave_print(int arr[][1000], int r, int c){
	for(int i = 0; i < c; i++){
		int sta_col, ter_col, diff;
		if(i%2 == 0){
			sta_col = 0;
			ter_col = r;
			diff = 1;
		}else{
			sta_col = r-1;
			ter_col = -1;
			diff = -1;
		}
		for(int j = sta_col; j != ter_col; j+=diff){
			cout<<arr[j][i]<<" ";
		}
	}cout<<endl;
}
int main(){
	int arr[1000][1000];
	int r = 3, c = 4;
	init_2d_arr(arr, r, c);
	row_major_print(arr, r, c);
	wave_print(arr, r, c);
	return 0;
}