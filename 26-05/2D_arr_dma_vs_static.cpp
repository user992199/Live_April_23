#include<iostream>
using namespace std;
int main(){
	int **a1;
	int row = 3, col = 3;
	a1 = new int*[row];
	for(int i = 0; i < row; i++){
		a1[i] = new int[col];
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			a1[i][j] = i*row + j;
		}
	}

	int a2[3][3];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			a1[i][j] = i*row + j;
		}
	}

	cout<<"&a1: "<<&a1<<"; &a1 + 1: "<<&a1 + 1<<endl;
	cout<<"&a2: "<<&a2<<"; &a2 + 1: "<<&a2 + 1<<endl;

	cout<<endl;

	cout<<"a1: "<<a1<<"; a1 + 1: "<<a1 + 1<<endl;
	cout<<"a2: "<<a2<<"; a2 + 1: "<<a2 + 1<<endl;

	cout<<endl;

	cout<<"a1[0]: "<<a1[0]<<"; a1[0] + 1: "<<a1[0] + 1<<endl;
	cout<<"a2[0]: "<<a2[0]<<"; a2[0] + 1: "<<a2[0] + 1<<endl;	
	return 0;
}