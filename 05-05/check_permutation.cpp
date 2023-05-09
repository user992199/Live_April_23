#include<iostream>
using namespace std;
bool check(char * a1, char * a2){
	int freq1[128] = {0};
	int freq2[128] = {0};
	int i = 0;
	while(a1[i]){
		freq1[a1[i]]++;
		i++;
	}
	i = 0;
	while(a2[i]){
		freq2[a2[i]]++;
		i++;
	}
	for(int i = 0; i < 128; i++){
		if(freq1[i] != freq2[i]){
			return false;
		}
	}
	return true;
}
int main(){
	char a1[] = "ginger";
	char a2[] = "ginreg";
	if(check(a1, a2)){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
}