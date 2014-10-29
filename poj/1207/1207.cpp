#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int x, y;
	int a, b;
	while(cin >> x >> y) {
		if(x < y){
			a = x;
			b = y;

		}
		else {
			a = y;
			b = x;
		}
		int max = 0;
		for(int i = a; i <= b ;i++) {
			int count = 1;
			int cur = i;
			while(cur != 1){
				if(cur % 2 == 0)
					cur /= 2;
				else 
					cur = 3 *cur + 1;
				count ++;
			}
			if(count > max)
				max = count;
		}
		cout << a << " " << b << " " << max << endl;
	}

	return 0;
}
