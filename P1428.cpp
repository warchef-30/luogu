#include <cstdio>
using namespace std;
int c[105];

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &c[i]);
		int tmp = 0;
		for (int j = 1; j <= i; j++){
			if (c[j] < c[i]) tmp++;
		}
		printf("%d ", tmp);
	}
}