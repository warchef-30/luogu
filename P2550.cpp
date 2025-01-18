#include <cstdio>
using namespace std;

int main(){
	int n, a1, a2, a3, a4, a5, a6, a7;
	int c[10] = {0};
	int sum;
	scanf("%d", &n);
	int a[10];
	for (int i = 1; i <= 7; i++){
		scanf("%d", &a[i]);
	}

	for (int i = 1; i <= n; i++){
		int x[10];
		sum = 0;
		for (int j = 1; j <= 7; j++){
			scanf("%d", &x[j]);
		}
		for (int aa = 1; aa <= 7; aa++){
			for (int xx = 1; xx <= 7; xx++){
				if (a[aa] == x[xx]) sum++;
			}
		}
		c[7 - sum]++;
	}
	
	for (int i = 0; i < 7; i++){
		printf("%d ", c[i]);
	}
}