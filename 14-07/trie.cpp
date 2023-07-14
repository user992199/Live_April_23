#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
class node{
public:
	char data;
	unordered_map<char, node*> children;
	bool is_word_ending;
	node(char data, bool iwe = false){
		this -> data = data;
		this -> is_word_ending = iwe;
	}
};
class trie{
	node * root;
public:
	trie(){
		root = new node('\0');
	}
	void insert(string word){
		node * temp = root;
		for(int i = 0; word[i]; i++){
			char ch = word[i];
			if(!(temp -> children.count(ch))){
				temp -> children[ch] = new node(ch);
			}
			temp = temp -> children[ch];
		}
		temp -> is_word_ending = true;
	}
	bool word_search(string key){
		node *temp = root;
		for(int i = 0; key[i]; i++){
			char ch = key[i];
			if(!(temp -> children.count(ch))){
				return false;
			}
			temp = temp -> children[ch];
		}
		return temp -> is_word_ending;
	}
	void word_search_loop(){
		string key;
		cin>>key;
		while(key != "end"){
			if(word_search(key)) cout<<"Word Found\n";
			else cout<<"Word NOT Found\n";
			cin>>key;
		}
	}
};
int main(){
	trie t;
	t.insert("HP");
	t.insert("Dell");
	t.insert("Apple");
	t.insert("Macbook");
	t.insert("Mac");
	t.insert("Coding");
	t.word_search_loop();
	return 0;
}