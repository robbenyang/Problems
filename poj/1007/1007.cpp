#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> v;

int count_inv(int index){
	string s = v[index];
	int ret = 0;
	for(int i = 0; i < s.length() - 1;i++){
		for(int j = i+1; j < s.length(); j++){
			if(s[i] > s[j])
				ret ++;
		}
	}
	return ret;
}

int main() {
	int n, m;
	string s;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> s;
		v.push_back(s);
	}
	vector<int> count(m);
	for(int i = 0; i < m; i++){
		count[i] = count_inv(i);
	}

	while(v.size()) {
		int to_rm_idx = 0;
		for(int i = 1; i < count.size(); i++){
			if(count[i] < count[to_rm_idx])
				to_rm_idx = i;
		}
		cout<<v[to_rm_idx]<<endl;
		v.erase(v.begin()+to_rm_idx);
		count.erase(count.begin()+to_rm_idx);
	}
	return 0;
}