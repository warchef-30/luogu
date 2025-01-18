#include <cstdio>
#include <cmath>
using namespace std;

double cal(double n){
	double x = pow(5.0, 0.5);
	double a1 = pow((1 + x) / 2, n);
	double a2 = pow((1 - x) / 2, n);
	double fn = (a1 - a2) / x;
	return fn;
}

int main(){
	double n, ans = 0.0;
	scanf("%lf", &n);

	ans = cal(n);

	printf("%.2lf", ans);
}