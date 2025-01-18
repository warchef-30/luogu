#include <cstdio>
using namespace std;

int main(){
	int mon, tmp = 0, sav = 0;
	for (int i = 1; i <= 12; i++){
		scanf("%d", &mon);
		tmp += 300;
		if (mon <= tmp){
			sav += (tmp - mon) / 100 * 100;
			tmp = (tmp - mon) % 100;
		}
		else{
			printf("-%d", i);
			return 0;
		}
	}

	int ans = tmp + sav * 1.2;
	printf("%d", ans);
}