#include <cstdio>
#include <algorithm>
using namespace std;
int a[10005];

int main(){
	int n, ans = 1, tmp = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if (i != 1 && a[i] == a[i - 1] + 1) tmp++;
		else tmp = 1;
		ans = max(ans, tmp);
	}

	printf("%d", ans);
}