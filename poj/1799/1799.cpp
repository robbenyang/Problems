#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

#define PI 3.1415926535

int main(){
	int t, n;
	double R;
	cin >> t;

	for(int i = 0; i < t; i++){
		cin >> R >> n;
		cout<<"Scenario #"<<i+1<<":"<<endl;
		if(n == 2){
			printf("%.3f\n\n", R/2);
			continue;
		}
		double sinx = sin(PI/n);
		double x = sinx*R/(1+sinx);
		printf("%.3f\n\n", x);
	}
	return 0;
}