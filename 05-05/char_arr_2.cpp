#include<iostream>
using namespace std;
int dummy(int k, int i = 10, int j = 20){
	cout<<k<<" "<<i<<" "<<j<<endl;
}
void take_input(char * arr, int n, char delimiter = '\n'){
	for(int i = 0; i < n; i++){
		char ch;
		cin.get(ch);
		if (ch == delimiter){
			arr[i] = '\0';
			break;
		}
		arr[i] = ch;
	}
	arr[n-1] = '\0';
}
int main(){
	char a1[10], a2[100];
	// take_input(a1, 10);
	cin.getline(a1, 9);
	// take_input(a2, 100, '$');
	cin.getline(a2, 100, '$');
	cout<<a1<<endl;
	cout<<a2<<endl;
	dummy(8, 19);
	return 0;
}