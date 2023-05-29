#include<iostream>
#include<cstring>
using namespace std;
// syntax
/*
class identifier{
public:
	all the member variables;
};
*/
class customer{
public:
	// all the member variables
	char name[100];
	int cID;
	int age;
	char gender;

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
	customer c1;

	char n[] = "Amit";
	strcpy(c1.name, n);
	c1.cID = 100;
	c1.age = 24;
	c1.gender = 'M';

	// cout<<c1.name<<endl;
	// cout<<c1.cID<<endl;
	// cout<<c1.age<<endl;
	// cout<<c1.gender<<endl;

	c1.print_customer_details();

	customer c2;
	char n2[] = "Bijender";
	strcpy(c2.name, n2);
	c2.cID = 101;
	c2.age = 30;
	c2.gender = 'M';
	c2.print_customer_details();
	return 0;
}