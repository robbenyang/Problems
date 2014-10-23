#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long n;
	cin >> n;
	if(n == 1 || n == 2){
		cout<<1<<endl;
		return 0;
	}
	long long count = 1;
	long long sum = 1;
	for(long long i = 2; i < n; i++){
		sum += i;
		if(sum > n)
			break;

		if(i % 2 == 0){

			if((n - i/2)%i == 0){
				count ++;
			}
		}
		else {
			if(n % i == 0){
				count++;
			}
		}

	}
	cout<<count<<endl;
	return 0;
}