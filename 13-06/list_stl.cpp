#include<iostream>
#include<list>
using namespace std;
void print_list(auto l){
	for(auto a: l){
		cout<<a<<" ";
	}
	cout<<endl;
}
int main(){
	// init
	// list<int> l{1, 2, 3, 4, 5};
	// list<int> l2(l1);
	// list<int> l2(5);
	// list<int> l2(5, 5);
	list<int> l;
	for(int i = 1; i <= 10; i++){
		i % 2 ? l.push_back(i) : l.push_front(i);
	}
	print_list(l);
	auto it = l.begin();
	for(; it != l.end(); it++){
		if(*it == 1) break;
	}
	if(it != l.end()){
		cout<<"calling erase\n";
		l.erase(it);
	}
	print_list(l);
	for(it = l.begin(); it != l.end(); it++){
		if(*it == 2) {
			it++; break;
		}
	}
	if(it != l.end()){
		cout<<"calling insert\n";
		l.insert(it, -1);
	}else{
		cout<<"element not found\n";
	}
	print_list(l);
	// l.pop_back();
	// l.pop_front();

	// for(auto a: l){
	// 	cout<<a<<" ";
	// }
	// cout<<endl;
	// l.clear();
	// auto fit = l.begin();
	// auto bit = l.rbegin();
	// for(; fit != l.end() and bit != l.rend(); fit++, bit++){
	// 	cout<<*fit<<" "<<*bit<<endl;
	// }
	// cout<<l.size()<<endl;
	return 0;
}