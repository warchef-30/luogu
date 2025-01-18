#include <cstdio>
using namespace std;

int peach(int n){
    int ans = 1;
    for (int i = 1; i < n; i++){
        ans = (ans + 1) * 2;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", peach(n));
}