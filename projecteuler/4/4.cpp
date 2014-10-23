#include <iostream>

using namespace std;

bool isPalind(int in) {
	int arr[6];
	for(int i = 0; i < 6; i++) {
		arr[i] = in % 10;
		in /= 10;
	}
	return arr[0] == arr[5] && arr[1] == arr[4] && arr[2] == arr[3];
}

bool has3DigitFact(int in) {
	for(int i = 999; i >= 100; i--){
		if(in % i == 0){
			cout << "Fact" << i <<endl;
			if(in / i < 1000)
				return true;
		}
	}
	return false;
}


int main() {
	int max = 999 * 999;
	int min = 100 * 100;
	for(int i = max; i >= min; i--){
		if(isPalind(i) && has3DigitFact(i)){
			cout << i <<endl;
			return 0;
		}
	}
	return 0;
}
