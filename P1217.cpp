#include <cstdio>
using namespace std;

bool prime(int x){
	for (int i = 2; i * i <= x; i++){
		if (x % i == 0) return 0;
	}
	return 1;
}

int main(){
	int a, b, num;
	scanf("%d%d", &a, &b);

	if (a <= 5 && b >= 5) printf("5\n");
	if (a <= 7 && b >= 7) printf("7\n");
	if (a <= 11 && b >= 11) printf("11\n");

	for (int d1 = 1; d1 <= 9; d1 += 2)
		for (int d2 = 0; d2 <= 9; d2++){
			num = d1 * 100 + d2 * 10 + d1;

			if (num < a) continue;
			if (num > b) return 0;

			if (prime(num)) printf("%d\n", num);
		}

	for (int d1 = 1; d1 <= 9; d1++)
		for (int d2 = 0; d2 <= 9; d2++)
			for (int d3 = 0; d3 <= 9; d3++){
				num = d1 * 10000 + d2 * 1000 + d3 * 100 + d2 * 10 + d1;
				if (num < a) continue;
				if (num > b) return 0;

				if (prime(num)) printf("%d\n", num);
			}

	for (int d1 = 1; d1 <= 9; d1++)
		for (int d2 = 0; d2 <= 9; d2++)
			for (int d3 = 0; d3 <= 9; d3++)
				for(int d4 = 0; d4 <= 9; d4++){
				num = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
				if (num < a) continue;
				if (num > b) return 0;

				if (prime(num)) printf("%d\n", num);
			}
}