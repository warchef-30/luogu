#include <cstdio>
using namespace std;

int main(){
	int n, cnt = 0;
	scanf("%d", &n);

	if (n % 2 == 0) cnt++;
	if (n > 4 && n <= 12) cnt++;

	printf("%d ", cnt == 2 ? 1 : 0);
	printf("%d ", cnt >= 1 ? 1 : 0);
	printf("%d ", cnt == 1 ? 1 : 0);
	printf("%d", cnt == 0 ? 1 : 0);
}