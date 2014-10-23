#include <iostream>

using namespace std;

int main() {
	unsigned long long max = 0;
	unsigned long long num;
	for(int i = 2; i < 1000000; i++){
		unsigned long long cur = i;
		unsigned long long count = 0;
		while(cur != 1){

			if(cur % 2 ==0)
				cur = cur / 2;
			else 
				cur = cur * 3 + 1;
			count ++;
		}
		if(count > max){
			max = count;
			num = i;
		}
		cout << i << endl;
		cout << count << endl;
	}
	cout << max << " " << num << endl;
	return 0;
}
