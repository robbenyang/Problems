#include <iostream>

using namespace std;

int main() {
	long long sq = 5050 * 5050;
	long long sum = 0;
	for(int i = 1; i <= 100; i ++) {
		sum += i*i;
	}
	cout << sq - sum<<endl;
}
