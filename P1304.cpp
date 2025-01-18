#include <cstdio>
using namespace std;

bool prime_check(int n){
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 4; i <= n; i += 2){
        for (int j = 2; j + j <= i; j++){
            if (prime_check(j) && prime_check(i - j)){
                printf("%d=%d+%d\n", i, j, i - j);
                break;
            }
            else continue;
        }
    }
}