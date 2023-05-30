#include<iostream>
using namespace std;
class student{
public:
	const int roll_number = 10;
	const int standard;
	char section;
	student(int rn = 100, int stn=10, char sec = 'A'):roll_number(rn), standard(stn), section(sec){

	}
	void print_details(){
		cout<<"Roll Number "<<roll_number<<endl;
		cout<<"Standard "<<standard<<endl;
		cout<<"Section "<<section<<endl;
	}
};
int main(){
	student adam;
	adam.print_details();
	return 0;
}