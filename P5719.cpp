#include <cstdio>
using namespace std;

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int a = 0, b = 0;
	int cnta = 0, cntb = 0;

	for (int i = 1; i <= n; i++){
		if (i % k == 0){
			a += i;
			cnta++;
		}

		else{
			b += i;
			cntb++;
		}
	}

	double avea = 1.0 * a / cnta;
	double aveb = 1.0 * b / cntb;

	printf("%.1lf %.1lf", avea, aveb);
}