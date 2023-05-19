#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void merge_2_sa(int * a1, int n, int * a2, int m){
	int i = 0, j = 0, k = 0;
	int a3[100];
	while(i < n and j < m){
		if(a1[i] < a2[j]){
			a3[k] = a1[i];
			i++;
		}else{
			a3[k] = a2[j];
			j++;
		}
		k++;
	}
	while(i < n){
		a3[k++] = a1[i++];
	}
	while(j < m){
		a3[k++] = a2[j++];
	}
	for(int i = 0; i < m+n; i++){
		a1[i] = a3[i];
	}
}
int main(){
	int a1[100] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int a2[100] = {2, 4, 6, 8, 10};
	int n = 10, m = 5;
	print(a1, n);
	print(a2, m);
	merge_2_sa(a1, n, a2, m);
	print(a1, n+m);
	print(a2, m);
	return 0;
}