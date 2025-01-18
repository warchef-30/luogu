#include <cstdio>
#include <cstring>
using namespace std;
bool ans[1025][1025];

void remit(int x, int y, int n){
    if (n == 0) ans[x][y] = 1;
    else{
        remit(x, y + (1 << (n - 1)), n - 1);
        remit(x + (1 << (n - 1)), y, n - 1);
        remit(x + (1 << (n - 1)), y + (1 << (n - 1)), n - 1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    remit(0, 0, n);

    for (int i = 0; i < (1 << n); i++){
        for (int j = 0; j < (1 << n); j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}