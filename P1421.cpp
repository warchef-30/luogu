#include <cstdio>
using namespace std;

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int pri = 1 * 10 + 9;
	int mon = a * 10 + b;
	int num = mon / pri;
	printf("%d", num);
}