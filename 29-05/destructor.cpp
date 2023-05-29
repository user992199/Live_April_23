#include<iostream>
#include<cstring>
using namespace std;

class customer{
public:
	// all the member variables
	char *name;
	int cID;
	int age;
	char gender;
	customer(){
		name = NULL;
		cout<<"Welcome New Customer\n";
	}
	// parameterized constructor function
	customer(char n[], int id, int a, char gen){
		cout<<"PCF\n";
		name = new char[strlen(n)];
		strcpy(name, n);
		cID = id;
		age = a;
		gender = gen;
	}
	customer(char n[], int id, int a){
		cout<<"PCF[3]\n";
		name = new char[strlen(n)];
		strcpy(name, n);
		cID = id;
		age = a;
	}
	// copy constructor
	customer(customer &o){
		cout<<"CC\n";
		name = new char[strlen(o.name)];
		strcpy(name, o.name);
		cID = o.cID;
		age = o.age;
		gender = o.gender;
	}
	// destructor function: cant have parameters
	~customer(){
		cout<<"Destructor "<<name<<endl;
	}
	// member functions
	void print_customer_details(){
		cout<<"Customer Details:-\n";
		cout<<"Name:\t\t "<<name<<endl;
		cout<<"Customer ID: "<<cID<<endl;
		cout<<"Age:\t\t "<<age<<endl;
		cout<<"Gender:\t\t "<<gender<<endl;
		cout<<endl;
	}
	void update_name(char * n){
		if(name != NULL){
			delete []name;
		}
		name = new char[strlen(n)];
		strcpy(name, n);
	}
};
int main(){
	customer c1;
	cout<<"c1 has been created\n";
	c1.update_name("Honey");
	customer c2;
	cout<<"c2 has been created\n";
	c2.update_name("Amit");
	customer c3;
	cout<<"c3 has been created\n";
	c3.update_name("Golu");
	return 0;
}