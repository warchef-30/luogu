#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	n /= 364;

	int x = min(100, n - 3), k;

	while (x > 0){
		if ((n - x) % 3 == 0){
			k = (n - x) / 3;
			break;
		}
		x--;
	}
	printf("%d\n%d", x, k);
}