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
	// member functions
	void print_customer_details(){
		cout<<"Customer Details:-\n";
		cout<<"Name:\t\t "<<name<<endl;
		cout<<"Customer ID: "<<cID<<endl;
		cout<<"Age:\t\t "<<age<<endl;
		cout<<"Gender:\t\t "<<gender<<endl;
		cout<<endl;
	}
};
int main(){
	char n[] = "Amit";
	customer c1(n, 100, 24, 'M');

	c1.print_customer_details();

	char n2[] = "Bijender";
	customer c2(n2, 101, 30, 'M');
	c2.print_customer_details();

	customer c3(c2);
    strcpy(c3.name, "Honey");
	c3.age = 50;
	c2.print_customer_details();
	c3.print_customer_details();

	customer c4 = c2;
    c4.cID = 113;
	c4.print_customer_details();
	return 0;
}