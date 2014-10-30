#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef map< map<char, int>, vector<string> > mymap;
typedef pair< map<char, int>, vector<string> > mypair;
bool compare(mypair p1, mypair p2) {
	return p1.second.size() > p2.second.size();
}

mymap m;

int main() {
	string s;
	while( cin >> s) {
		map<char, int> cur;
		for(int i = 0; i < s.length(); i++) {
			if(cur.find(s[i]) != cur.end()){
				cur.insert(make_pair<char, int>(s[i], 1));
			}
			else
				cur[ s[i] ]++;
		}
		mymap::iterator it = m.find(cur);
		if(it == m.end()){
			vector<string> v;
			v.push_back(s);
			m.insert(make_pair< map<char, int>, vector<string> >(cur, v));
		}
		else{
			it->second.push_back(s);
		}
		
	}
	sort(m.begin(), m.end(), compare);
	int ub = max(5, m.size());
	mymap::iterator it = m.begin();
	for(int i = 0; i < ub; i++){
		for(int j = 0; j < it->second.size(); j++)
			cout << it->second[j] << " " ;
		cout << endl;
	}
}
