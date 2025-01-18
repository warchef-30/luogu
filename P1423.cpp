#include <cstdio>
using namespace std;

int main(){
	double s, cons = 2.0, dis = 0;
	int ans = 0;
	scanf("%lf", &s);

	while (dis < s){
		dis += cons;
		cons *= 0.98;
		ans++;
	}

	printf("%d", ans);
}