#include<iostream>
#include<cstring>
using namespace std;
int word_search(char (*list)[100], int n, char * word){
	for(int i = 0; i < n; i++){
		if(strcmp(word, list[i]) == 0){
			return i;
		}
	}
	return -1;
}
int main(){
	char list[][100] = {
		"Apple",
		"Ball",
		"Cat",
		"Denmark",
		"Ethiopia"
	};
	int n = sizeof(list)/sizeof(list[0]);
	char word[100];
	cin.getline(word, 100);
	int ind = word_search(list, n, word);
	if(ind == -1){
		cout<<"Word not there\n";
	}else{
		cout<<"Word found at "<<ind<<endl;
	}
	return 0;
}