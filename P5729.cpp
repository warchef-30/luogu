#include <cstdio>
using namespace std;
int a[30][30][30];

int main(){
	int w, x, h, q;
	scanf("%d%d%d%d", &w, &x, &h, &q);
	for (int i = 1; i <= q; i++){
		int x1, y1, z1, x2, y2, z2;
		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
		for (int xx = x1; xx <= x2; xx++){
			for (int yy = y1; yy <= y2; yy++){
				for (int zz = z1; zz <= z2; zz++){
					a[xx][yy][zz] = 1;
				}
			}
		}
	}

	int cnt = 0;
	for (int xx = 1; xx <= w; xx++){
		for (int yy = 1; yy <= x; yy++){
			for (int zz = 1; zz <= h; zz++){
				if (a[xx][yy][zz] == 0) cnt++;
				//printf("ay\n");
			}
		}
	}
	printf("%d", cnt);
}