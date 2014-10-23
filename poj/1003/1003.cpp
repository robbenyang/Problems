#include <iostream>
#include <vector>

using namespace std;
vector<double> v;
int main() {
	double num; 

	double sum = 0;
	int i = 2;
	while(sum <= 5.20){
		sum += 1.0/i++;
		v.push_back(sum);
	}
	//cout<<v[v.size() - 1]<<endl;
	while(1){
		cin >> num;
		if(num == 0.00)
			break;
		for(int i = 0; i < v.size();i++){
			if(v[i] > num){
				cout<<i+1<<" card(s)"<<endl;
				break;
			}
		}
	}

	return 0;
}