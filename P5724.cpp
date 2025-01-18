#include <cstdio>
using namespace std;
int a[105];

int main(){
	int n, max = 0, min = 1000;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}

	printf("%d", max - min);
}