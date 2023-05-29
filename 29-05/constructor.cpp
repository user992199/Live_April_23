#include<iostream>
#include<cstring>
using namespace std;

class customer{
public:
	// all the member variables
	char name[100];
	int cID;
	int age;
	char gender;
	customer(){
		cout<<"Welcome New Customer\n";
	}
	// parameterized constructor function
	customer(char n[], int id, int a, char gen){
		cout<<"PCF\n";
		strcpy(name, n);
		cID = id;
		age = a;
		gender = gen;
	}
	customer(char n[], int id, int a){
		cout<<"PCF[3]\n";
		strcpy(name, n);
		cID = id;
		age = a;
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
	// c1.print_customer_details();
	// strcpy(c1.name, n);
	// c1.cID = 100;
	// c1.age = 24;
	// c1.gender = 'M';

	// cout<<c1.name<<endl;
	// cout<<c1.cID<<endl;
	// cout<<c1.age<<endl;
	// cout<<c1.gender<<endl;

	c1.print_customer_details();

	char n2[] = "Bijender";
	customer c2(n2, 101, 30);
	// strcpy(c2.name, n2);
	// c2.cID = 101;
	// c2.age = 30;
	// c2.gender = 'M';
	c2.print_customer_details();
	return 0;
}