#include <cstdio>
#include <string.h>
using namespace std;
char a[15][15];
char b[15][15];
char c[15][15];
char temp[15][15];

//turn 90 degrees
void turn(int n, char arr[15][15]){
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            temp[j][n - i + 1] = arr[i][j];
    memcpy(arr, temp, sizeof(temp));
}

void symmetry(int n, char arr[15][15]){
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            temp[i][n - j + 1] = arr[i][j];
    memcpy(arr, temp, sizeof(temp));
}

int main(){
    int n;
    bool flag = 1;
    scanf("%d\n", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            scanf(" %c", &a[i][j]);
        }
    }
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            scanf(" %c", &b[i][j]);
        }
    }

    memcpy(c, a, sizeof(a));
    turn(n, c);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (c[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("1");
        return 0;
    }

    turn(n, c);
    flag = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (c[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("2");
        return 0;
    }

    turn(n, c);
    flag = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (c[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("3");
        return 0;
    }

    memcpy(c, a, sizeof(a));
    symmetry(n, c);
    flag = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (c[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("4");
        return 0;
    }

    turn(n, c);
    flag = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (c[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("5");
        return 0;
    }

    turn(n, c);
    flag = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (c[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("5");
        return 0;
    }

    turn(n, c);
    flag = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (c[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("5");
        return 0;
    }

    flag = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j] != b[i][j]) flag = 0;
        }
    }
    if (flag){
        printf("6");
        return 0;
    }

    printf("7");
}