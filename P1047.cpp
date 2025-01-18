#include <cstdio>
using namespace std;
int jud[10005] = {0};

int main(){
	int l, m;
	scanf("%d%d", &l, &m);
	for (int i = 1; i <= m; i++){
		int u, v;
		scanf("%d%d", &u, &v);
		for (int i = u; i <= v; i++){
			jud[i] = 1;
		}
	}

	int cnt = 0;
	for (int i = 0; i <= l; i++){
		if (jud[i] == 0) cnt++;
	}
	printf("%d", cnt);
}