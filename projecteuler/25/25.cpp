#include <iostream>

using namespace std;

#define T 999

void add(int *  a, int * b, int * c){
	int carryin = 0;
	int i = 0;
	while(a[i] != -1 && b[i] != -1){
		int cur = a[i]+b[i];
		if(cur >= 10){
			c[i] = cur - 10 + carryin;
			carryin = 1;
		}
		else {
			c[i] = cur + carryin;
			carryin = 0;
		}
		i++;
	}

	if(a[i] != -1){
		while(a[i] != -1){
			c[i] = a[i] + carryin;
			carryin = 0;
			i++;
		}
	}
	else if(b[i] != -1){
		while(b[i] != -1){
			c[i] = b[i] + carryin;
			carryin = 0;
			i++;
		}
	}
	else if(carryin == 1)
		c[i++] = 1;
	c[i] = -1;
	return;
}

int main() {
	int a [1001];
	int b [1001];
	int c [1001];
	int n = 1;
	a[0] = b[0] = 1;
	a[1] = b[1] = -1;
	b[T] = c[T] = -1;
	while(b[T] == -1){
		add(a, b, c);
		copy(b, b+1001, a);
		copy(c, c+1001, b);
		n++;
	/*
		while(c[i] != -1){
			cout << c[i++];
		}
		cout << endl;
	*/
	}
	cout << n << endl;
}
