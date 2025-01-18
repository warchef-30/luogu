#include <cstdio>
#include <cmath>
using namespace std;
int ans[40001] = {0};

int main(){
    int c, tmp = 0, cnt = 1, total = 0;
    int i = 1;
    while (scanf("%1d", &c) != EOF){
        if (c != 0 && c != 1) continue;
        total++;

        if (total == 1){
            tmp = c;
            if (tmp == 1){
                ans[i] = 0;
                i++;
            }
            continue;
        }

        if (c == tmp)  cnt++;

        else{
            ans[i] = cnt;
            cnt = 1;
            i++;
            tmp = c;
        }
    }
    ans[i++] = cnt;

    int n = sqrt(total);
    printf("%d", n);

    int j = 1;
    for(int j = 1; j < i; j++) {
        printf(" %d", ans[j]);
    }
}