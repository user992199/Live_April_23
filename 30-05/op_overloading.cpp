#include<iostream>
#include<cstring>
using namespace std;
class student{
public:
	int id;
	int score;
	int operator+ (student & obj){
		cout<<"Jiss object ne call kara hai, uska score: "<<score<<endl;
		cout<<"Jo object pass hua hai as argument, uska score: "<<obj.score<<endl;
		return score + obj.score;
	}
	int operator+ (int s){
		cout<<"Jiss object ne call kara hai, uska score: "<<score<<endl;
		cout<<"Jo object pass hua hai as argument, uska score: "<<s<<endl;
		return score + s;
	}
};
int main(){
	student golu;
	student molu;
	golu.score = 90;
	molu.score = 75;
	cout<<golu + molu<<endl;
	cout<<molu + golu<<endl;
	cout<<molu + molu<<endl;
	cout<<golu + golu<<endl;
	cout<<golu + 50<<endl;
	return 0;
}