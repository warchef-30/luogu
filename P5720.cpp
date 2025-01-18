#include <cstdio>
using namespace std;

int main(){
	int n, cnt = 1;
	scanf("%d", &n);

	while (n != 1){
		n /= 2;
		cnt++;
	}

	printf("%d", cnt);
}