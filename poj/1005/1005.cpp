#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>


#define PI 3.1415926


static double incre = 100 / PI;

using namespace std;


struct PT {
	double x, y;
	double dist2;
	PT() {};
	PT(double x, double y): x(x), y(y) {
		dist2 = x*x + y*y;
	};
	PT(double x, double y, double dist2): x(x), y(y), dist2(dist2) {};
};

int main() {
	int n;
	double x, y;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x>> y;
		double dist2 = x*x + y *y;
		int year = (dist2/incre)+ 1;
		cout << "Property " << i+1 << ": This property will begin eroding in year " << year << "." << endl;
	}

	cout << "END OF OUTPUT." <<endl;
	return 0;
}
