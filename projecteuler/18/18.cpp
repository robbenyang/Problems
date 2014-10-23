#include <iostream>
#include <algorithm>

using namespace std;

#define N 15

int a[N][N];
int best[N][N];

int main() {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < i+1; j++) {
			cin >> a[i][j];
		}
	}
	best[0][0] = a[0][0];
	for(int i = 1; i < N; i++) {
		for(int j = 0; j < i+1; j++) {
			if(j == 0) {
				best[i][j] = best[i-1][j] + a[i][j];
			}
			else if(j == i) {
				best[i][j] = best[i-1][j-1] + a[i][j];
			}
			else {
				best[i][j] = max(best[i-1][j-1], best[i-1][j]) + a[i][j];
			}
		}
	}
	int max = -1;
	for(int i = 0; i < N; i++) {
		if(best[N-1][i] > max)
			max = best[N-1][i];
	}
	cout << max << endl;
}
