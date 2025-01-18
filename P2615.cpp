#include <cstdio>
using namespace std;
void squ(int n){
	int a[50][50] = {0};
	a[1][(n + 1) / 2] = 1;

	int x = 1, y = (n + 1) / 2;
	for (int k = 2; k <= n * n; k++){
		if (x == 1 && y != n){
			a[n][y + 1] = k;
			x = n, y++;
		}
		else if (x != 1 && y == n){
			a[x - 1][1] = k;
			x--, y = 1;
		}
		else if (x == 1 && y == n){
			a[x + 1][y] = k;
			x++;
		}
		else if (x != 1 && y != n){
			if (a[x - 1][y + 1] == 0){
				a[x - 1][y +  1] = k;
				x--, y++;
			}
			else{
				a[x + 1][y] = k;
				x++;
			}
		}
	}
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (a[i][j] != 0) printf("%d ", a[i][j]);
			else break;
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	squ(n);
}