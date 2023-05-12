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
void spiral_print(int arr[][1000], int r, int c){
	int fr = 0, fc = 0, lr = r-1, lc = c-1;
	while(fc <= lc and fr <= lr){
		for(int col = fc; col <= lc; col++){
			cout<<arr[fr][col]<<" ";
		}
		fr++;
		if(fr > lr) break;
		for(int row = fr; row <= lr; row++){
			cout<<arr[row][lc]<<" ";
		}
		lc--;
		if(fc > lc) break;
		for(int col = lc; col >= fc; col--){
			cout<<arr[lr][col]<<" ";
		}
		lr--;
		if(fr > lr) break;
		for(int row = lr; row >= fr; row--){
			cout<<arr[row][fc]<<" ";
		}
		fc++;
	}
	cout<<endl;
}
int main(){
	int arr[1000][1000];
	int r = 10, c = 3;
	init_2d_arr(arr, r, c);
	row_major_print(arr, r, c);
	spiral_print(arr, r, c);
	return 0;
}