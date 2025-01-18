#include <cstdio>
using namespace std;
int a[205][205] = {0};

int main(){
    int n, c;
    scanf("%d", &n);
    int x = 1, y = 1;
    int tmp = 0;

    while (scanf("%d", &c) != EOF){
        for (int i = 1; i <= c; i++){
            if (y > n){
                y = 1;
                x++;
            }
            a[x][y] = tmp;
            y++;
        }
        if (tmp == 0) tmp = 1;
        else tmp = 0;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
