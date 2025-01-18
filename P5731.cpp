#include <cstdio>
using namespace std;
int a[10][10];

int judge(int n,int x, int y){
    if (n % 2 == 0){
        if (x <= n / 2 && y >= x - 1 && y < n - x + 1) return 2;
        if (x > n / 2 && y > n - x + 1 && y <= x) return 4;
        if (y < n / 2 && x > y + 1 && x <= n - y + 1) return 1;
        if (y > n / 2 && x >= n - y + 1 && x < y) return 3;
        if (y == n / 2 && x == n / 2 + 1) return 1;
    }
    else{
        if (x <= (n + 1) / 2 && y >= x - 1 && y < n - x + 1) return 2;
        if (x > (n + 1) / 2 && y > n - x + 1 && y <= x) return 4;
        if (y <= (n + 1) / 2 && x > y && x <= n - y + 1) return 1;
        if (y > (n + 1) / 2 && x >= n - y + 1 && x < y) return 3;
        if (y == (n + 1) / 2 && x == (n + 1) / 2) return 3;
    }
    return 0;
}

int main(){
    int n, tmp = 1;
    scanf("%d", &n);

    a[1][1] = 1;
    int x = 1, y = 1;

    for (int i = 2; i <= n * n; i++){
        int dir = judge(n, x, y);
        if (dir == 1){
            x--;
            a[x][y] = i;
        }
        if (dir == 2){
            y++;
            a[x][y] = i;
        }
        if (dir == 3){
            x++;
            a[x][y] = i;
        }
        if (dir == 4){
            y--;
            a[x][y] = i;
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}