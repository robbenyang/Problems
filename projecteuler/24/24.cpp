#include <iostream>
#include <algorithm>
#include <vector>


#define ONEM 1000000

using namespace std;

int main() {
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i);
	for(int i = 0; i < ONEM-1; i++){
		next_permutation(v.begin(), v.end());
	}
	for(int i = 0; i < 10; i++)
		cout << v[i];
	cout << endl;
	return 0;
}
