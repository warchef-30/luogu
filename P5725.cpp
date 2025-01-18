#include <cstdio>
using namespace std;

int main(){
	int n, tmp = 1;
	scanf("%d", &n);

	for (int a = 1; a <= n; a++){
		for (int b = 1; b <= n; b++){
			printf("%02d", tmp);
			tmp++;
			if (b == n) printf("\n");
		}
	}
	printf("\n");
	tmp = 1;

	for (int a = 1; a <= n; a++){
		for (int spa = 1; spa <= n - a; spa++) printf("  ");
		for (int b = 1; b <= a; b++){
			printf("%02d", tmp);
			tmp++;
			if (b == a) printf("\n");
		}
	}
}