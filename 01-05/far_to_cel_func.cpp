#include<iostream>
using namespace std;
void far_to_cel(int iv, int fv, int sv){
	while(iv <= fv){
		cout<<iv<<"\t"<<(5*(iv-32)/9)<<endl;
		iv += sv;
	}
}
int main(){
	int iv = -40, fv = 500, sv = 10;
	far_to_cel(iv, fv, sv/10);
	return 0;
}