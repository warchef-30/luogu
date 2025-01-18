#include <cstdio>
using namespace std;

int a[25][25];

int main(){
    int n;
    scanf("%d", &n);
    a[1][1] = 1;
    a[2][1] = 1;
    a[2][2] = 1;
    for (int i = 3; i <= n; i++){
        for (int j = 1; j <= i; j++){
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}