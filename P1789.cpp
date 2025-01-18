#include <cstdio>
using namespace std;
int a[105][105] = {0};
int am[15][3] = {
    {0, 2},
    {-1, 1}, {0, 1}, {1, 1},
    {-2, 0}, {-1, 0}, {0, 0}, {1, 0}, {2, 0},
    {-1, -1}, {0, -1}, {1, -1},
    {0, -2}
};
int ak[25][3] = {
    {-2, 2}, {-1, 2}, {0, 2}, {1, 2}, {2, 2},
    {-2, 1}, {-1, 1}, {0, 1}, {1, 1}, {2, 1},
    {-2, 0}, {-1, 0}, {0, 0}, {1, 0}, {2, 0},
    {-2, -1}, {-1, -1}, {0, -1}, {1, -1}, {2, -1},
    {-2, -2}, {-1, -2}, {0, -2}, {1, -2}, {2, -2}
};

int main(){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);

    for (int i = 1; i <= m; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        for (int j = 0; j <= 14; j++){
            int nx, ny;
            nx = x + am[j][0];
            ny = y + am[j][1];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n){
                a[nx][ny] = 1;
            }
        }
    }

    for (int i = 1; i <= k; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        for (int j = 0; j <= 24; j++){
            int nx, ny;
            nx = x + ak[j][0];
            ny = y + ak[j][1];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n){
                a[nx][ny] = 1;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
           if (a[i][j] == 0) ans++;
        }
    }

    printf("%d", ans);
}