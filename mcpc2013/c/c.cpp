#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int n, p;
	while(1) {
		vector<int> v;
		cin >> n;
		if(n == 0)
			return 0;
		cin >> p;
		int tot = n + 1;
		if(p % 2 == 0){
			v.push_back(p-1);
			v.push_back(tot - p);
			v.push_back(tot - p +1);
		}
		else {
			v.push_back(p+1);
			v.push_back(tot - p);
			v.push_back(tot - p -1);
		}
		sort(v.begin(), v.end());
		cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
	}
}
