#include <cstdio>
#include <iostream>
#include <cmath>
#define PI 3.141593
using namespace std;

int main(){
	int que;
	scanf("%d", &que);
	switch (que) {
	case 1: printf("I love Luogu!"); break;
	case 2: printf("6 4"); break;
	case 3: printf("%d\n%d\n%d\n", 14 / 4, 14 / 4 * 4, 14 % 4); break;
	case 4: printf("%.3f", 500 * 1.0 / 3); break;
	case 5: printf("%d", (260 + 220) / (12 + 20)); break;
	case 6: cout << sqrt(6 * 6 + 9 * 9); break;
	case 7: printf("110\n90\n0\n"); break;
	case 8: cout << 2 * PI * 5 << endl << PI * 5 * 5 << endl << 4 * PI * 5 * 5 * 5 / 3; break;
	case 9: cout << 22; break;
	case 10: cout << 9; break;
	case 11: cout << 100 * 1.0 / 3; break;
	case 12: {
		printf("%d\n", 'M' - 'A' + 1);
		printf("%c", 'A' + 18 - 1); break;
	}
	case 13: {
		double val = 4 * PI * (4 * 4 * 4 + 10 * 10 * 10) / 3;
		cout << (int)pow(val, 1.0 / 3); break;
	}
	case 14: cout << 50; break;
	}
}