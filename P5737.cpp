#include <cstdio>
using namespace std;
int ans[1500];

bool judge(int y){
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return true;
    else return false;
}

int main(){
    int l, r, cnt = 0;
    scanf("%d%d", &l, &r);
    for (int i = l; i <= r; i++){
        if (judge(i)){
            ans[cnt++] = i;
        }
    }

    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++){
        printf("%d ", ans[i]);
    }
}