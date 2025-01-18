#include <cstdio>
using namespace std;

int main(){
	int e;
	double pri;
	scanf("%d", &e);
	if (e <= 150) pri = 0.4463 * e;
	else if (e <= 400) pri = 0.4463 * 150 + 0.4663 * (e - 150);
	else pri = 0.4463 * 150 + 0.4663 * 250 + 0.5663 * (e - 400);
	printf("%.1lf", pri);
}