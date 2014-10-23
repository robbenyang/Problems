#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define N 100

string arr[N];

string add(const string & s1, const string & s2) {
	int len1 = s1.length();
	int len2 = s2.length();
	string res = ""; 
	int in = 0;
	for(int i = 1; i <= max(len1, len2); i++) {
		int cur = in;
		if(len1 - i >= 0)
			cur += (int)(s1[len1-i] - '0');
		if(len2 - i >= 0)
			cur += (int)(s2[len2-i] - '0');
		if(cur > 9){
			in = 1;
		}
		else {
			in = 0;
		}
		res = to_string(cur % 10) + res;
	}
	if(in == 1)
		res = "1"+res;
	
	cout << res << endl;
	return res;
}

int main() {
	string res = "0";
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
		res = add(res, arr[i]);
	}
}
