#include<iostream>
#include<queue>
#define min_heap priority_queue<int, vector<int>, greater<int>>
using namespace std;
void print_nums(min_heap h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;
}
void with_min_heap(){
	int k = 3;
	min_heap h;
	int input;
	for(int i = 0; i < k; i++){
		cin>>input;
		h.push(input);
	}
	while(input != -10){
		cin>>input;
		if(input == -1) print_nums(h);
		else if(h.top() < input){
			h.pop();
			h.push(input);
		}
	}
}
// void with_max_heap(){
// 	max_heap h;
// 	h.push(k_elements);
// 	while(!-10){
// 		if(h == -1){
// 			diff func for printing
// 		}
// 		else{
// 			h.push();
// 		}
// 	}
// }
int main(){
	with_min_heap();
	return 0;
}