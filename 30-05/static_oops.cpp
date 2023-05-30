#include<iostream>
using namespace std;
class student{
public:
	const int roll_number = 10;
	const int standard;
	char section;
	static int school_code;
	student(int rn = 100, int stn=10, char sec = 'A'):roll_number(rn), standard(stn), section(sec){
	}
	void print_details(){
		cout<<"Roll Number "<<roll_number<<endl;
		cout<<"Standard "<<standard<<endl;
		cout<<"Section "<<section<<endl;
		cout<<"School Code "<<school_code<<endl;
		cout<<endl;
	}
};
// syntax
// datatype class_name::varible_name;
int student::school_code;
int main(){
	student adam, eve(188, 8, 'K');
	adam.school_code = 738;
	adam.print_details();
	eve.print_details();
	eve.school_code = 734;
	adam.print_details();
	eve.print_details();
	student::school_code = 444;
	adam.print_details();
	eve.print_details();
	cout<<student::school_code<<endl;
	return 0;
}