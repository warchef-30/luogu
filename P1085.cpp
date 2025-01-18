#include <cstdio>
using namespace std;

int main(){
	int max = 0, date = 0;
	int a, b;
	for (int i = 1; i <= 7; i++){
		scanf("%d%d", &a, &b);
		if (a + b > 8 && a + b > max){
			max = a + b;
			date = i;
		}
	}
	printf("%d", date);
}