#include<iostream>
using namespace std;
int main(){
	int arr[] = {586, 856, 938, 661, 972, 461, 414, 76, 111, 152,472, 260, 584, 42, 380, 112, 867, 780, 195, 520,831, 450, 779, 599, 905, 502, 281, 450, 806, 935,474, 778, 849, 612, 966, 56, 189, 948, 624, 777,692, 772, 219, 580, 920, 134, 987, 853, 667, 218,492, 282, 867, 41, 699, 212, 739, 988, 189, 50,392, 476, 938, 781, 10, 103, 135, 294, 325, 765,954, 677, 856, 673, 419, 956, 423, 921, 208, 671,133, 313, 767, 611, 987, 557, 362, 914, 8, 427,333, 435, 407, 34, 756, 419, 669, 167, 743, 584};
	int n = sizeof(arr)/sizeof(arr[0]);
	int number_of_it = 0;
	for(int i = 0; i <= n-2; i++){
		int number_of_swaps = 0;
		for(int j = 0; j <= n-2-i; j++){
			number_of_it++;
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				number_of_swaps++;
			}
		}
		if(number_of_swaps == 0){
			break;
		}
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	cout<<number_of_it<<endl;
	return 0;
}