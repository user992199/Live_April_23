#include<iostream>
using namespace std;
void search(int (*arr)[10], int r, int c, int key){
	int i = 0, j = c-1;
	while(i < r and j >= 0){
		if(arr[i][j] == key){
			cout<<"key found at:-\n";
			cout<<"row: "<<i+1<<endl;
			cout<<"col: "<<j+1<<endl;
			return;
		}else if(arr[i][j] > key){
			// move left because curr_ele is big
			j--;
		}else{
			// move down because curr_ele is small
			i++;
		}
	}
	cout<<"Key NOT found\n";
}
int main(){
	int arr[][10] = {
		{ 1,  3,  5,  6},
		{ 2,  4,  8, 12},
		{ 6,  9, 11, 13},
		{ 7, 10, 14, 16},
		{17, 20, 24, 26}
	};
	int r = 5, c = 4;
	int key = 9;
	search(arr, r, c, key);
	return 0;
}