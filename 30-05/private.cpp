#include<iostream>
#include<cstring>
using namespace std;
class str{
private:
	char * data;
	int i;
public:
	str(char arr[], int j){
		data = new char[strlen(arr)];
		strcpy(data, arr);
		i = j;
	}
	char * func(str obj){
		cout<<obj.data<<endl;
		cout<<obj.k<<endl;
	}
};
int main(){
	str o1("Ball", 10);
	str o2("Bat", 20);
	o2.func(o2);
	return 0;
}