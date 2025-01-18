#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n, max = 10000000;
	scanf("%d", &n);
	for (int i = 1; i <= 3; i++){
		int num, pri;
		scanf("%d%d", &num, &pri);
		int cost;
		cost = ceil(n * 1.0 / num) * pri;
		if(cost < max) max = cost;
	}
	printf("%d", max);
}