#include <iostream>

using namespace std;

int main() {
	int days = 0;
	int count = 0;
	for(int year = 1901; year <= 2000; year++) {
		for(int i = 0; i < 12; i++) {
			if(days % 7 == 5){
				cout << year << " " << i+1 << endl;
				count ++;
			}
			if(i == 3 || i == 5 || i == 8 || i == 10){
				days += 30;
			}
			else if(i == 1) {
				if(year % 4 == 0 && year % 400 != 0) {
					days += 29;
				}
				else {
					days += 28;
				}
			}
			else
				days += 31;
		}
	}
	cout << count << endl;
}
