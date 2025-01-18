#include <cstdio>
using namespace std;

int main(){
	int n, i;
	scanf("%d", &n);
	int ans[1000];
	ans[0] = n;

	for (i = 1; n != 1; i++){
		if (n % 2 == 1) n = n * 3 + 1;
		else n /= 2;
		ans[i] = n;
	}

	for (int j = i - 1; j >= 0; j--) printf("%d ", ans[j]);
}