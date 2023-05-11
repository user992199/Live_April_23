#include<iostream>
using namespace std;
void init_2d_arr(int arr[][4], int r, int c){
	int v = 1;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = (i * c) + j + 1;
			// arr[i][j] = v;
			// v++;
			cout<<arr[i][j]<<"\t";
		}cout<<endl;
	}
}
void search(int arr[][4], int r, int c, int key){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(arr[i][j] == key){
				cout<<"row: "<<i<<"; "<<"col: "<<j<<endl;
				return;
			}
		}
	}
}
int main(){
	int arr[3][4];
	int r = 3, c = 4;
	init_2d_arr(arr, r, c);
	int key = 10;
	arr[0][3] = key;
	arr[2][2] = key;
	search(arr, r, c, key);
	return 0;
}