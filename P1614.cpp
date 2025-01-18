#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n, m, ans;
    
    scanf("%d%d", &n, &m);
    int a[3005];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= n - m; i++){
        int tmp = 0;
        for (int j = 0; j < m; j++){
            tmp += a[i + j];
        }
        if (i == 0) ans = tmp;
        else ans = min(ans, tmp);
    }
    printf("%d", ans);
    return 0;
}