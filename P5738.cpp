#include <cstdio>
#include <algorithm>
using namespace std;

double score(int* a, int size){
    int maxn = 0, minn = 10;
    double sum = 0;
    for (int i = 0; i < size; i++){
        maxn = max(maxn, a[i]);
        minn = min(minn, a[i]);
        sum += a[i];
    }

    sum = sum - maxn - minn;
    return (sum / (size - 2));
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    double maxs = 0;

    for (int i = 0; i < n; i++){
        int tmp[25];
        for (int j = 0; j < m; j++) scanf("%d", &tmp[j]);
        double sco = score(tmp, m);
        maxs = max(maxs, sco);
    }

    printf("%.2lf", maxs);
}