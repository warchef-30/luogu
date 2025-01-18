#include <cstdio>
using namespace std;
int a[1005];

int main(){
	int n, max = 0, min = 10, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
		sum += a[i];
	}

	sum = sum - max - min;

	double mar = 1.0 * sum / (n - 2);
	printf("%.2lf", mar);
}