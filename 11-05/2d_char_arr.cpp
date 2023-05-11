#include<iostream>
using namespace std;
int main(){
	char arr[][100] = {
		"hello",
		"bye",
		"macbook",
		"zoom",
		"google"
	};
	int num_of_row = sizeof(arr)/sizeof(arr[0]);
	cout<<num_of_row<<endl;
	int num_of_col = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<num_of_col<<endl;
	for(int i = 0; i < num_of_row; i++){
		cout<<arr[i]<<endl;
	}cout<<endl;
	for(int i = 0; i < num_of_row; i++){
		for(int j = 0; arr[i][j] != '\0'; j++){
			cout<<arr[i][j];
		}cout<<endl;
	}

	cout<<"arr[0][0]:\t"<<arr[0][0]<<endl;
	cout<<"arr[0]:\t\t"<<arr[0]<<endl;
	cout<<"arr:\t\t"<<arr<<endl;
	return 0;
}