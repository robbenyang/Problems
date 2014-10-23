#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long a;
	cin >> a;
	long long max = -1;
	long long i = 71;
	while(i < a){
		if(a % i == 0) {
			max = i;
			a = a / i;
			i = 71;
			cout << max << endl;
			cout << "a "<< a<<endl;
		}
		i++;
	}
}
