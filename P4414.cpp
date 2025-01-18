#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	int x, y, z;
	scanf("%d%d%d", &a, &b, &c);

	if (a >= b && a >= c){
		if (b >= c){
			x = a; y = b; z = c;
		}
		else{
			x = a; y = c; z = b;
		}
	}

	else if (b >= a && b >= c){
		if (a >= c){
			x = b; y = a; z = c;
		}
		else{
			x = b; y = c; z = a;
		}
	}

	else if (c >= a && c >= b){
		if (a >= b){
			x = c; y = a; z = b;
		}
		else{
			x = c; y = b; z = a;
		}
	}

	string s;
	cin >> s;
	for (int i = 0; i < 3; i++){
		if (s[i] == 'A') cout << z << " ";
		else if (s[i] == 'B') cout << y << " ";
		else cout << x << " ";
	}
}