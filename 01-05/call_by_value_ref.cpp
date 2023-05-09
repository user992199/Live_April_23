#include<iostream>
using namespace std;
void update_i(int i, int j){
	i += 10;
	j += 10;
	// cout<<"in func: "<<i<<endl;
}
void update_ij_fr(int &i, int &j){
	i += 10;
	j += 10;
	// cout<<"in func: "<<i<<endl;
}
int main(){
	int i = 0, j = 10;
	cout<<"befor updation: "<<i<<", "<<j<<endl;
	update_i(i, j);
	cout<<"after updation: "<<i<<", "<<j<<endl;
	update_ij_fr(i, j);
	cout<<"after updation fr: "<<i<<", "<<j<<endl;
	return 0;
}