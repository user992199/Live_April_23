#include<iostream>
using namespace std;
int main(){
	int i = 44;
	switch(i){ // variable can only be either int or char
	case 5:
		cout<<"Five\n";
		break;
	case 4:
	case 14:
	case 24:
	case 34:
	case 44:
		cout<<"Four\n";
		break;
	case 3:
		cout<<"Three\n";
		break;
	default:
		cout<<"Nun of the above\n";
		break;
	case 2:
		cout<<"Two\n";
		break;
	}
	cout<<"EOP\n";
	return 0;
}