#include <iostream>
#include <map>

using namespace std; 

int fac(int num) {
	int count = 0;
	for(int i = 1; i <= num; i++) {
		if(num % i == 0)
			count ++;
	}
	return count;
}

int main() {
	int res = 0;
	int last = 1;
	/*
	cout<< fac(5984) << " " << fac(5985) << endl;
	cout << fac(17907120) << endl;
	*/
	


	for(int i = 2; ; i++) {
		int cur = fac(i); 
		if(i % 2 == 0){
			res = last * (cur - 1);
		}
		else {
			res = (last - 1) * cur;
		}
		if(res > 500){
			int num = i * (i-1) / 2;
			if(fac(num) > 500){
				cout << num << endl;
				return 0;
			}
		}
		last = cur;
	}
	return 0;
}
