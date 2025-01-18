#include <cstdio>
#include <cmath>
using namespace std;
bool jud(int a, int b, int c, int d, int e, int f){
	if (fabs(a - d) <= 5 && fabs(b - e) <= 5 && fabs(c - f) <= 5 && fabs(a + b + c - d - e - f) <= 10) return 1;
	else return 0;
}

int main(){
	int n, cnt = 0;
	int a[1005][5] = {0};
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d%d%d", &a[i][1], &a[i][2], &a[i][3]);
	}

	for (int i = 1; i <= n; i++){
		for (int j = i + 1; j <= n; j++){
			if (jud(a[i][1], a[i][2], a[i][3], a[j][1], a[j][2], a[j][3])) cnt++;
		}
	}
	printf("%d", cnt);
}