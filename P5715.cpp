#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b && a >= c){
		if (b >= c) cout << c << " " << b << " " << a;
		else cout << b << " " << c << " " << a;
		return 0;
	}

	if (b >= a && b >= c){
		if (a >= c) cout << c << " " << a << " " << b;
		else cout << a << " " << c << " " << b;
		return 0;
	}

	if (c >= a && c >= b){
		if (a >= b) cout << b << " " << a << " " << c;
		else cout << a << " " << b << " " << c;
		return 0;
	}
}