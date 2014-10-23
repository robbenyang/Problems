#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	while(1) {
		cin >> n;
		if(n == 0)
			return 0;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int t;
			cin >> t;
			v.push_back(t);
		}
		int a[2];
		for(int i = 0; i < 2; i++){
			int min;
			for(int j = 0; j < v.size(); j++){
				if(v[j] != 0)
					min = j;
			}
			
			for(int j = 0; j < v.size(); j++){
				if(v[j] < v[min] && v[j] > 0)
					min = j;
			}
			a[i] = v[min];
			v.erase(v.begin()+min);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size()/2; i++){
			a[0] = 10*a[0] + v[2*i];
			a[1] = 10*a[1] + v[2*i + 1];
		}
		if(v.size() % 2 == 1)
			a[0] = 10*a[0] + v[v.size()-1];
		cout << a[0]+a[1] << endl;
	}
}
