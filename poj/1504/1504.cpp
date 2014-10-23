#include <iostream>
#include <cmath>

using namespace std;


int rev(int in){
	while(in % 10 == 0)
		in /= 10;
	int new_num = 0;
	int copy = in;
	int digits = 0;
	while(copy){
		copy /= 10;
		digits++;
	}
	copy = in;
	while(digits--) {
		int last = copy % 10;
		copy /= 10;
		new_num += last*pow(10, digits);
		
	}
	return new_num;
}


int main() {

	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;

		int m = rev(a);
		int n = rev(b);
		cout<<rev(m+n)<<endl;
	}

	return 0;
}