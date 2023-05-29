#include<iostream>
using namespace std;
class employee{
private:
	int password;
	void private_funct(){
		cout<<"private function\n";
	}
public:
	int id;
	employee(int i, int p){
		id = i;
		password = p;
	}
	void print(){
		cout<<id<<endl;
	}
	// getters
	void get_password(){
		cout<<"password: "<<password<<endl;
	}
	// setters
	void set_password(int old_pass, int p){
		if(old_pass == password){
			password = p;
		}
		else{
			cout<<"Wrong Pass\n";
		}
	}
};
int main(){
	employee jon(10, 100);
	jon.id = 13;
	jon.print();
	jon.set_password(10, 1000);
	jon.get_password();
	return 0;
}