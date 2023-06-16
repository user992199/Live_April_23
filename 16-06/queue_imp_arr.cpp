#include<iostream>
#include<climits>
using namespace std;
class Queue{
	int * arr;
	int cap, curr_size, f, b;
public:
	Queue(int ts = 5){
		cap = ts;
		arr = new int[cap];
		curr_size = 0;
		f = -1;
		b = -1;
	}
	void push(int data){
		if(curr_size == cap) return;
		if(curr_size == 0){
			f = 0;
		}
		b = (b+1)%cap;
		arr[b] = data;
		curr_size++;
	}
	void pop(){
		if(curr_size == 0) return;
		if(curr_size == 1){
			f = b = -1;
		}else{
			f = (f + 1)%cap;
		}
		curr_size--;
	}
	int front(){
		return curr_size == 0 ? INT_MIN : arr[f];
	}
	int size(){
		return curr_size;
	}
	bool empty(){
		return curr_size == 0;
	}
};
int main(){
	Queue q(10);
	for(int i = 0; i < 17; i++){
		q.push(i+1);
		cout<<i+1<<" ";
	}
	cout<<endl;
	cout<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}