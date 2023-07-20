#include<iostream>
#include<cstring>
using namespace std;
bool compare_window_to_key(int * kf, int * wf){
	for(int i = 0; i < 26; i++){
		if(kf[i] != wf[i]) return false;
	}
	return true;
}
int count_freq(string str, string key){
	int key_freq[26] = {0};
	int sp = 0, ep = 0, ans = 0;
	// evaluating the key
	int k = key.size();
	while(ep < k){
		key_freq[key[ep] - 'a']++;
		ep++;
	}
	// computing the first window
	int window_freq[26] = {0};
	for(ep = 0; ep < k; ep++){
		window_freq[str[ep] - 'a']++;
	}
	if(compare_window_to_key(key_freq, window_freq)) ans++;
	// sliding the window
	while(str[ep]){
		window_freq[str[sp] - 'a']--;
		sp++;
		window_freq[str[ep] - 'a']++;
		ep++;
		if(compare_window_to_key(key_freq, window_freq)) ans++;
	}
	return ans;
}
int main(){
	string str = "ingiingi";
	string key = "gn";
	cout<<count_freq(str, key)<<endl;
	return 0;
}