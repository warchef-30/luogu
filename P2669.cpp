#include <cstdio>
using namespace std;

int main(){
	int k, coin = 1, sum = 0;
	scanf("%d", &k);

	for (int i = 1; i <= k; i++){
		sum += coin;
		if (i == (coin + 1) * coin / 2) coin++;
	}

	printf("%d", sum);
}