#include <iostream>
#include <cmath>
#include <map>
using namespace std;

#define N 10000



int main() {
	int tot = 0;
	map<int, int> m;
	for(int i = 10; i < N; i++) {
		int root = sqrt(i);
		int sum = 1;
		for(int j = 2; j < root; j++){
			if(i % j == 0){
				sum += j;
				sum += (i/j);
			}
		}
		if(i % root == 0)
			sum += root;
		if(m.find(sum) != m.end()){
			if(m[sum] == i){
				cout << i << " " << sum << endl;
				tot += (sum + i);
				m.erase(sum);
			}
		}
		else
			m[i] = sum;
	}
	cout << tot << endl;
}
