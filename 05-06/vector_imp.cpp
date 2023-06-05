#include<iostream>
using namespace std;
// template <typename identifier>
template <typename T>
class Vector{
	// doubling the vector/cap of arr
	void double_the_cap(){
		// code
		T *old_arr = arr;
		int old_cap = cap;
		cap *= 2;
		arr = new T[cap];
		for(int i = 0; i < old_cap; i++){
			arr[i] = old_arr[i];
		}
		delete []old_arr;
	}
	T * arr;
	int cap; // total capacity
	int total_size; // number of elements present in vector
public:
	Vector(int total_cap = 1, int data = 0){ 
		// if(total_cap == 0) arr = NULL;

		arr = new T[total_cap];
		// for(int i = 0; i < total_cap; i++){
		// 	push_back(data);
		// }

		cap = total_cap;
		total_size = 0;
	}
	// push back
	void push_back(int data){
		// if(total_size == cap) double_the_cap();
		if(total_size == cap) reserve(cap * 2);
		arr[total_size++] = data;
	}
	// pop back
	void pop_back(){
		if(total_size > 0) total_size--;
	}
	// size
	int size(){
		return total_size;
	}
	// empty
	bool empty(){
		return total_size == 0 ? true : false;
	}
	// capacity
	int capacity(){
		return cap;
	}
	void reserve(int new_cap){
		if(new_cap > cap){
			T *old_arr = arr;
			int old_cap = cap;
			cap = new_cap;
			arr = new T[cap];
			for(int i = 0; i < old_cap; i++){
				arr[i] = old_arr[i];
			}
			delete []old_arr;
		}
	}
	/*
	return_type operator[] (parameters){
		task
		return statement
	}
	*/
	T& operator[](int index){
		return arr[index];
	}
	T * begin(){
		return arr;
	}
	T * end(){
		return arr + total_size;
	}
};
int main(){
	Vector<char> v;
	v.push_back(63);
    cout<<v[0]<<endl;
    v[0] = 65;
    v.reserve(3);
    // cin>>v[0];
    cout<<v[0]<<endl;
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"cap: "<<v.capacity()<<endl;
    for(int i = 0; i < 10; i++){
        v.push_back(1);
        cout<<"#############\n";
        cout<<"size: "<<v.size()<<endl;
        cout<<"cap: "<<v.capacity()<<endl;
    }
    for(int i = 0; i < 10; i++){
        v.pop_back();
        cout<<"#############\n";
        cout<<"size: "<<v.size()<<endl;
        cout<<"cap: "<<v.capacity()<<endl;
    }
	return 0;
}