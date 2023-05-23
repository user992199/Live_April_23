#include<iostream>
using namespace std;
void print(int board[10][10], int n){
	for(int i = 0; i < n ; i++){
		for(int j = 0 ; j < n; j++){
			cout<<board[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
}
bool possible(int board[10][10], int n, int i, int j, int value){
	// check column
	for(int row = 0; row < n; row++){
		if(board[row][j] == value) return false;
	}
	// check row
	for(int col = 0; col < n; col++){
		if(board[i][col] == value) return false;
	}
	// check box
	int fr = i - i%3, fc = j - j%3;
	int lr = fr + 2, lc = fc + 2;
	for(int row = fr; row <= lr; row++){
		for(int col = fc; col <= lc; col++){
			if(board[row][col] == value) return false;
		}
	}
	return true;
}
bool solve_sudoku(int board[10][10], int n, int i = 0, int j = 0){
	// base case
	if(i == n){
		print(board, n);
		return true;
	}
	if(j == n){
		return solve_sudoku(board, n, i+1, 0);
	}
	// recursive case
	if(board[i][j] != 0){
		return solve_sudoku(board, n, i, j+1);
	}
	for(int value = 1; value < 10; value++){
		if(possible(board, n, i, j, value)){
			board[i][j] = value;
			if(solve_sudoku(board, n, i, j+1)){
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}
int main(){
	int board[10][10] = {
		{1, 2, 3, 0, 0, 0, 0, 0, 0},
		{4, 6, 7, 0, 0, 0, 0, 0, 0},
		{8, 9, 5, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	int n = 9;
	solve_sudoku(board, n);
	return 0;
}