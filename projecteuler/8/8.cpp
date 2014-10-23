#include <iostream>

using namespace std;

#define C 13

int main() {
	string num;
	cin >> num;
	long long m = 1;
	long long curr = 1;
	int count = 0;
	char first_digit = '9';
	for(int i = 0; i < num.length(); i++) {
		if(num[i] == '0'){
			curr = 1; 
			count = 0;
			continue;
		}
		if(count < C){
			if(count == 0)
				first_digit = num[i] - '0';
			curr *= (num[i] - '0');
			count++;
		}
		else {
			int pre = (int)(num[i-C] - '0');
			int ths = (int)(num[i] - '0');
			curr = curr / pre * ths;
		//	cout << "numbers " << pre << " " << ths << " ";
		//	cout << curr << endl;
			if(curr > m)
				m = curr;
		}
	}

	cout << m << endl;
}
