#include <iostream>

using namespace std;

int main() {
	string s, t;
	while (cin >> s >> t) {
		bool isSub = false;
		int itr = 0;
		for(int i = 0; i < t.length(); i++) {
			if(s[itr] == t[i]){
				itr++;
			}
			if(itr == s.length()){
				cout << "Yes" << endl;
				isSub = true;
				break;
			}
		}
		if(!isSub)
			cout <<"No" << endl;
	}
}
