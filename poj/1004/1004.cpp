#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double sum = 0; 
	
	for (int i = 0; i < 12; i++) {
		double cur;
		cin >> cur;
		sum += cur; 

	}
	cout << "$" <<setprecision(2) << fixed<<  sum/12 << endl;
	return 0;
}
