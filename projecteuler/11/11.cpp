#include <iostream>

using namespace std; 

int a[20][20];

long long max_row() {
	long long max = 0;
	long long last = -1;
	int col, row;
	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 17; j++) {
			long long curr;
			if(last >= 0 && a[i][j-1] != 0){
				last = last * a[i][j+3] / a[i][j-1];
			}
			else {
				last = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];
			}
			if(last > max)
				max = last;
		}
		last = -1;
	}
	return max;
}

long long max_col() {
	long long max = 0;
	long long last = -1;
	int col, row;
	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 17; j++) {
			if(last >= 0 && a[j-1][i] != 0){
				last = last * a[j+3][i] / a[j-1][i];
			}
			else {
				last = a[j][i] * a[j+1][i] * a[j+2][i] * a[j+3][i];
			}
			if(last > max){
				max = last;
				col = i;
				row = j;
			}
		}
		last = -1;
	}
	cout << row << " " << col << endl;
	return max;
}

long long max_dia() {
	long long max = 0;
	long long last = -1;
	for(int i = 0; i < 17; i++) {
		for(int j = 0; j < 17; j++) {
			last = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
			if(last > max)
				max = last;
		}
	}
	for(int i = 3; i < 20; i++) {
		for(int j = 0; j < 17; j++) {
			last = a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3];
			if(last > max)
				max = last;
		}
	}
	return max;
}

int main() {

	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 20; j++) {
			cin >> a[i][j];
		}
	}
	cout << max_row() << endl;
	cout << max_col() << endl;
	cout << max_dia() << endl;
	
	return 0;
}
