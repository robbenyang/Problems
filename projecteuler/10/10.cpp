#include <iostream>
#include <cmath>

using namespace std;

#define SIZE 2000000

int main() {
	bool primes[SIZE];
	for(int i = 0; i < SIZE; i++) {
		primes[i] = true;
	}
	primes[0] = primes[1] = false;
	int limit = sqrt(SIZE) + 1;
	for(int i = 2; i < SIZE; i++) {
		if(primes[i]) {
			int idx = i + i;
			while(idx < SIZE){
				primes[idx] =false;
				idx += i;
			}
		}
	}
	long long sum = 0;
	for(int i = 2; i < SIZE; i++){
		if(primes[i])
			sum += i;
	}
	cout << sum <<endl;
}
