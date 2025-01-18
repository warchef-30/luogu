#include <cstdio>
using namespace std;
int a[35];

int main(){
    long long n = 0;
    while (scanf("%d", &a[n]) != EOF) n++;

    long long sum = 0;
    for (int j = 0; j < n; j++){
        sum += a[j] * (long long)(1 << (n - 1));
        printf("%lld += %d * %d\n", sum, a[j], 1 << (n - 1));
    }

    printf("%lld", sum);
}