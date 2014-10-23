#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string alp;

bool compare(string s1, string s2) {
	int len = min(s1.length(), s2.length());
	for(int i = 0; i < len; i++) {
		int p1 = alp.find(s1[i]);
		int p2 = alp.find(s2[i]);
		if(p1 < p2)
			return true;
		else if(p1 > p2)
			return false;
	}
	return s1.length() < s2.length();
}

int main() {
	int n;
	int count = 0;
	while(1) {
		cin >> n;
		if(n == 0)
			return 0;
		vector<string> v(n);
		cin >> alp;
		for(int i = 0; i < n; i++){
			cin >> v[i];	
		}
		sort(v.begin(), v.end(), compare);
		cout << "year " << ++count << endl;
		for(int i = 0; i < n; i++)
			cout << v[i] << endl;
	}
	return 0;
}
