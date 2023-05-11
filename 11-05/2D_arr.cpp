#include<iostream>
using namespace std;
int main(){
	// declare
	// int arr[2][3];
	// init 1
	// int arr[2][3] = {1, 2, 3, 4, 5, 6};
	// init 2
	// int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
	// init 3
	// int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
	// init 4
	// int arr[5][3] = {{1}, {4, 5, 6}, {7, 8}, {10}};
	int arr[][3] = {1, 2, 3, 4, 5, 6, 10, 9, 8, 11};
	int num_of_row = sizeof(arr)/sizeof(arr[0]);
	for(int row = 0; row < num_of_row; row++){
		for(int col = 0; col < 3; col++){
			cout<<arr[row][col]<<"\t";
		}cout<<endl;
	}
	return 0;
}