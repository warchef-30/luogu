#include <cstdio>
using namespace std;

int main(){
	int x, n, ans = 0;
	scanf("%d%d", &x, &n);

	for (int i = 0; i <= n - 1; i++){
		int day = (x + i) % 7;
		if (day != 6 && day != 0) ans += 250;
		//printf("ajsdhk%d  %d\n", day, ans);
	}

	printf("%d", ans);
}