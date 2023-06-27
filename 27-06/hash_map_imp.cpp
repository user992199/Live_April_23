#include<iostream>
#include<cstring>
using namespace std;
class node{
public:
	int value;
	string key;
	node * next;
	node(string k, int v, node * n = 0): value(v), key(k), next(n){} 
};
class hashmap{
	int n, s; // number of ele in ht, cap of ht
	node ** ht;
	int hash_function(string key){
		int hi = 0;
		int prime_number = 7;
		int factor = 1;
		for(int i = 0; i < key.size(); i++){
			hi += (key[i] * factor) % s;
			hi %= s;
			factor *= prime_number % s;
			factor %= s;
		}
		return hi;
	}
	void reset(){
		ht = new node * [s]; 
		n = 0;
		for(int i = 0; i < s; i++) ht[i] = 0;
	}
	void rehash(){
		node ** old_table = ht;
		int old_size = s;
		s *= 2;
		reset();
		for(int i = 0; i < old_size; i++){
			node * head = old_table[i];
			while(head){
				insert(head -> key, head -> value);
				node * temp = head;
				head = head -> next;
				delete temp;
			}
		}
		delete []old_table;
	}
public:
	hashmap(int s = 5){
		this -> s = s;
		reset();
	}
	void insert(string key, int value){
		int hi = hash_function(key);
		// ht[hi] = new node(key, value, ht[hi]);
		node * temp = new node(key, value);
		temp -> next = ht[hi];
		ht[hi] = temp;
		n++;
		// kya threshold cross hua?
		float load_factor = 0.6;
		if(n > s * load_factor){
			rehash();
		}
	}
	void print_hm(){
		for(int i = 0; i < s; i++){
			node * head = ht[i];
			cout<<i<<": ";
			while(head){
				cout<<"("<<head -> key<<", "<<head -> value<<") ";
				head = head -> next;
			}
			cout<<endl;
		}
	}
	node* find(string key){
		int hi = hash_function(key);
		node * head = ht[hi];
		while(head and head -> key != key){
			head = head -> next;
		}
		return head;
	}
	void erase(string key){
		int hi = hash_function(key);
		node * curr = ht[hi];
		node * prev = 0;
		while(curr and curr -> key != key){
			prev = curr;
			curr = curr -> next;
		}
		if(!curr) return;
		n--;
		if(ht[hi] == curr) ht[hi] = curr -> next;
		else prev -> next = curr -> next;
		delete curr;
	}
	int & operator[](string key){
		node * n1 = find(key);
		if(!n1){
			insert(key, 0);
			n1 = find(key);
		}
		return n1 -> value;
	}
};
int main(){
	hashmap hm;
	hm.insert("Apple", 10);
	hm.insert("Mango", 13);
	hm.insert("Banana", 5);
	hm.insert("Pineapple", 25);
	hm.insert("Kiwi", 40);
	hm.insert("Melon", 40);
	hm.insert("Lichi", 40);
	hm.insert("Tomato", 40);
	hm.print_hm();
	node * fruit1 = hm.find("Melon");
	fruit1 -> value = 55;
	// hm.print_hm();
	// cout<<fruit1<<endl;
	hm.erase("Tomato");
	hm.erase("Mango");
	hm["tomato"] = 99;
	hm["Pineapple"] = 33; 	
	hm.print_hm();
	// cout<<"EOP\n";
	return 0;
}