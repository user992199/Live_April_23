#include<iostream>
using namespace std;
int main(){
	int n;
	char arr[100];
	cin>>n;
	// char d;
	// cin.get();
	cin.ignore();
	cin.getline(arr, 100);
	cout<<"number: "<<n<<endl;
	cout<<"string: "<<arr<<endl;
	cout<<"EOP\n";
	return 0;
}