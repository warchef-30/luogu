#include <cstdio>
using namespace std;
int a[15] = {0};

int main(){
	int n, x;
	scanf("%d%d", &n, &x);

	for (int i = 1; i <= n; i++){
		int tmp = i;
		while (tmp != 0){
			a[tmp % 10]++;
			tmp /= 10;
		}
	}

	printf("%d", a[x]);
}