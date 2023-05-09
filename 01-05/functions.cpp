#include<iostream>
using namespace std;

/*
return_type identifier(parameters){
	// task
	// return statement
}

return_type -> datatype of output
parameters -> varibles in which input for the function will be stored
argument -> data sent to function as input
void is to specifiy no output
*/

// function definition
void print_hello_world(){ // non parameterized function, with no return type
	cout<<"Hello World\n";
}

void print_hello_world_n_times(int n){ // parameterized function with not return type
	for(int i = 0; i < n; i++){
		print_hello_world();
	}
}

int find_sum(int a, int b, int c){ // parameterized func with int return type
	int d = a + b + c;
	a = 0;
	return d;
	cout<<d/a<<endl;
}

int main(){
	// function calling
	// syntax
	// identifier(arguments);
	// print_hello_world();
	// print_hello_world();
	// print_hello_world();
	// print_hello_world();
	// print_hello_world();

	print_hello_world_n_times(5);

	int k = find_sum(10, 9, 16);
	cout<<"k: "<<k<<endl;
	return 0;
}