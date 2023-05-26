#include<iostream>
using namespace std;
int main(){
	int **arr;
	int row = 3, col = 3;
	arr = new int*[row];
	for(int i = 0; i < row; i++){
		arr[i] = new int[col];
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			arr[i][j] = i*row + j;
		}
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}

	// deallocating the 2D array
	for(int i = 0; i < row; i++){
		// deallocating each row/1D array
		delete [] arr[i];
	}
	// deallocating the address array
	delete [] arr;

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}