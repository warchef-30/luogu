#include <cstdio>
#include <cmath>
using namespace std;
#define PI 3.14

int main(){
	int h, r;
	scanf("%d%d", &h, &r);
	double val = 1.0 * h * (PI * r * r);
	int n = ceil(1.0 * 20 * 1000 / val);
	printf("%d", n);
}