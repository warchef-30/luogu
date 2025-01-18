#include <cstdio>
using namespace std;
int ans[1000000];

bool prime(int x){
	for (int i = 2; i * i <= x; i++){
		if (x % i == 0) return 0;
	}
	return 1;
}

int main(){
	int L, sum = 0, cnt = 0;
	scanf("%d", &L);

	int num = 2;

	while (sum <= L){
		if (prime(num)){
			ans[cnt] = num;
			sum += num;
			cnt++;
		}
		num++;
	}
	cnt -= 2;

	for (int i = 0; i <= cnt; i++){
		printf("%d\n", ans[i]);
	}
	printf("%d", cnt + 1);
}