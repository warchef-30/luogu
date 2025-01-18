#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    vector<bool> dif(n, false);
    for (int i = 0; i < n - 1; i++){
        int d = abs(arr[i] - arr[i + 1]);
        if (d < n) dif[d] = true;
        //printf("%d %d %d\n", arr[i], arr[j], abs(arr[i] - arr[j]));
    }

    for (int i = 1; i < n; i++){
        if (dif[i] == 0){
            printf("Not jolly");
            return 0;
        }
    }

    printf("Jolly");
    return 0;
}