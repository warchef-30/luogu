#include <cstdio>
using namespace std;

int main(){
	int n, a, min = 1000000;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &a);
		if (a < min) min = a;
	}

	printf("%d", min);
}