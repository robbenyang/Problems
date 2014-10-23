#include <iostream>

using namespace std;

int main(){
	int t; 
	int n;
	cin >> t;
	int tests[t];
	int max = 0;
	for(int i = 0; i < t; i++){
		cin >>tests[i];
		if(tests[i] > max)
			max = tests[i];
	}
	cout << "max "<<max<<endl;
	int arr[max+1];
	//arr[1] = 0; 
	for(int i = 2; i <= max; i++){
		long long two = 0, five = 0;
		int curr = i;
		while(curr % 2 == 0){
			two++;
			curr /= 2;
		}
		while(curr % 5 == 0){
			five++;
			curr /= 5;
		}

		arr[i] = two < five ? two : five;
	}


	for(int i = 0; i < t; i++){
		cout<<arr[tests[i]]<<endl;
	}


/*
	while(t--){
		long long two = 0, five = 0;
		cin >> n;
		for(int i = 2; i <= n; i++){
			int curr = i;
			while(curr % 2 == 0){
				two++;
				curr /= 2;
			}
			while(curr % 5 == 0){
				five++;
				curr /= 5;
			}
		}
		long long zeros = two < five ? two : five;
		cout << zeros << endl;
	}
	*/
	return 0;
}