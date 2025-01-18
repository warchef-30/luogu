#include <cstdio>
using namespace std;
int a[105];

bool Prime_judge(int n){
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (Prime_judge(a[i])) printf("%d ", a[i]);
    }
}