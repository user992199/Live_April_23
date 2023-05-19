#include<iostream>
using namespace std;
void tower_of_hanoi(int n, char source, char helper, char target){
	// base case
	if(n == 0) return;
	// recursive case
	tower_of_hanoi(n-1, source, target, helper);
	cout<<"Mover disk "<<n
		<<" from Tower "<<source
		<<" to Tower "<<target<<endl;
	tower_of_hanoi(n-1, helper, source, target);
}
int main(){
	char t1 = 'A', t2 = 'B', t3 = 'C';
	int n = 4;
	tower_of_hanoi(n, t1, t2, t3);
	return 0;
}