#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, b;
    scanf("%d%d", &n, &b);

    vector<int> cow(n);
    for (int i = 0; i < n; i++){
        scanf("%d", &cow[i]);
    }

    sort(cow.begin(), cow.end());

    int sum = 0;
    for (int i = n - 1; i >= 0; i--){
        sum += cow[i];
        if (sum >= b){
            printf("%d", n - i);
            break;
        }
    }
}