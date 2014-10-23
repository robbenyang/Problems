#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cout << "Scenario #" << i+1 << ":" << endl;
		cin >> n;
		int num = 2*n + 1;
		for(int j = 0; j < num; j++){
			cout << "slice #"<< j+1 << ":" << endl;
			for(int k = 0; k < num; k++){
				for(int h = 0; h < num; h++){
					int a = n - j > 0 ? n -j : j - n;
					int b = n - k > 0 ? n -k : k - n;
					int c = n - h > 0 ? n -h : h - n;
					int dis = a + b + c;
					if(dis > n){
						cout<<".";	
					}
					else{
						cout<<dis;
					}
				}
				cout<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}