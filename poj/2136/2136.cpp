#include <iostream>
#include <map>

using namespace std;

map<char, int> m;

int main(){
	string s;
	for(char i = 'A'; i <= 'Z'; i++){
		m[i] = 0;
	}
	for(int i = 0; i < 4; i++){
		getline(cin, s);
		for(int j = 0; j < s.length(); j++){
			if(s[j]>= 'A' && s[j] <= 'Z'){

				m[s[j]]++;
			}
		}
	}
	int max_count = 0;
	for(map<char, int>::iterator it = m.begin(); it != m.end(); it++){
		if(it->second > max_count)
			max_count = it->second;
	}

	for(int i = 0; i < max_count; i++){
		for(char c = 'A'; c <= 'Z'; c++){
			if(m[c] >= max_count - i)
				cout<<"*";
			else
				cout<<" ";
			if(c != 'Z')
				cout<<" ";
		}
		cout<<endl;
	}
	for(char c = 'A'; c < 'Z'; c++){
		cout<<c<<" ";
	}
	cout<<'Z'<<endl;
	return 0;
}