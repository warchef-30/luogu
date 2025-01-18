#include <cstdio>
using namespace std;

int main(){
	int a[15], ans = 0;
	for (int i = 1; i <= 10; i++){
		scanf("%d", &a[i]);
	}

	int hei;
	scanf("%d", &hei);

	hei = hei + 30;

	for (int i = 1; i <= 10; i++){
		if (hei >= a[i]) ans++;
	}

	printf("%d", ans);
}