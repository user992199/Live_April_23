#include<iostream>
using namespace std;
void print(int ** arr, int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}
void delete_2d(int **arr, int row, int col){
	// deallocating the 2D array
	for(int i = 0; i < row; i++){
		// deallocating each row/1D array
		delete [] arr[i];
	}
	// deallocating the address array
	delete [] arr;
}
int main(){
	int **arr;
	int row = 3, col = 3;
	arr = new int*[row];
	for(int i = 0; i < row; i++){
		arr[i] = new int[col];
	}
	print(arr, row, col);

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			arr[i][j] = i*row + j;
		}
	}

	print(arr, row, col);
	delete_2d(arr, row, col);
	print(arr, row, col);

	return 0;
}