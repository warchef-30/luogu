#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int m, t, s;
	scanf("%d%d%d", &m, &t, &s);
	if (!t) {
		printf("0");
		return 0;
	}
	int delta_m = ceil(s * 1.0 / t);
	if(delta_m > m) printf("0");
	else printf("%d", m - delta_m);
}