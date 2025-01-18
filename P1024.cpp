#include <cstdio>
#include <cmath>
#define eps 1e-4
using namespace std;
double a, b, c, d;

double f(double x){
	return a * x * x * x + b * x * x + c * x + d;
}

int main(){
	double ans;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	for (int i = -100; i <= 100; i++){
		double l = i, r = i + 1, mid;
		if (fabs(f(l)) < eps) printf("%.2lf ", l);
		else if (fabs(f(r)) < eps) continue;

		else if (f(l) * f(r) < 0){
			while (r - l > eps){
				mid = (l + r) / 2;
				if (f(l) * f(mid) > 0) l = mid;
				else r = mid;
			}
			printf("%.2lf ", l);
		}
	}
}