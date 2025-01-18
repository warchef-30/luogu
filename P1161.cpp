#include <cstdio>
#include <cmath>    
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    bool *arr = new bool[20000005]();
    for (int i = 1; i <= n; i++) {
        double a;
        int t;
        scanf("%lf%d", &a, &t);
        for (int j = 1; j <= t; j++){
            int tmp = floor(a * j);
            if (arr[tmp] == 0) arr[tmp] = 1;
            else arr[tmp] = 0;
        }
    }

    for (int i = 1; i <= 2000000; i++){
        if (arr[i] == 1){
            printf("%d", i);
            return 0;
        }
    }
    delete[] arr;
}
