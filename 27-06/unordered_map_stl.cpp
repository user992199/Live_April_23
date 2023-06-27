#include<iostream>
#include<unordered_map>
#include<utility>
using namespace std;
int main(){
	// unordered_map<key ka datatype, value ka datatype> identifier;
	// key ka datatype : string char int
	unordered_map<string, int> umap;
	umap.insert(make_pair("Apple", 10));
	umap.insert({"Banana", 5});
	pair<string, int> p("Kiwi", 13);
	umap.insert(p);
	umap["Tomato"] = 9;
	// for(auto fruit: umap){
	// 	cout<<fruit.first<<" "<<fruit.second<<endl;
	// }
	auto fruit = umap.find("Tomato");
	// cout<<fruit -> second<<endl;
	umap.erase(fruit);
	cout<<fruit -> first<<endl;
	cout<<umap.size()<<endl;
	for(auto it = umap.begin(); it != umap.end(); it++){
		auto fruit = *it;
		cout<<fruit.first<<" "<<fruit.second<<endl;
	}
	umap["Melon1"] = 10;
	umap["Melon2"] = 10;
	umap["Lichi"] = 10;
	for(int i = 0; i < umap.bucket_count(); i++){
		cout<<i<<" -> ";
		for(auto it = umap.begin(i); it != umap.end(i); it++){
			cout<<"("<<it -> first <<" "<< it -> second <<") ";
		}
		cout<<endl;
	}
	bool c = umap.count("lichi");
	c ? cout<<"Y\n" : cout<<"No\n";
	umap.clear();
	cout<<umap.size()<<endl;
	unordered_map<int, int> umap2 = {
		{10, -1},
		{17, -2}, 
		{3, -3}
	};
	for(int i = 0; i < umap2.bucket_count(); i++){
		cout<<i<<" -> ";
		for(auto it = umap2.begin(i); it != umap2.end(i); it++){
			cout<<"("<<it -> first <<" "<< it -> second <<") ";
		}
		cout<<endl;
	}
	return 0;
}