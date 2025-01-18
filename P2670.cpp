#include <cstdio>
using namespace std;
const int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
char a[105][105];

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            scanf(" %c", &a[i][j]);
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i][j] == '*') printf("*");
            else{
                int cnt = 0;
                for (int k = 0; k < 8; k++){
                    if (a[i + x[k]][j + y[k]] == '*') cnt++;
                }
                printf("%d", cnt);
            }
        }
        printf("\n");
    }
}