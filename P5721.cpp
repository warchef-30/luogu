#include <cstdio>
using namespace std;

int main(){
	int n, t, num = 1;
	scanf("%d", &n);
	t = n;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= t; j++){
			printf("%02d", num);
			num++;
			if (j == t) printf("\n");
		}

		t--;
	}
}