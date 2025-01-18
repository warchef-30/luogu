#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = 2; i < n; i++){
        bool found = false;
        for (int j = 0; j < i && !found; j++){
            if (j == i) continue;
            for (int k = j + 1; k < i; k++){
                if (k == i) continue;
                if (a[i] == a[j] + a[k]){
                    ans++;
                    found = true;
                    break;
                }
            }   
        }
    }
    printf("%d", ans);
    return 0;
}