#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, cnt = 0;
    scanf("%d", &n);
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++){
        int tmp = arr[i], j;
        for (j = i - 1; j >= 0; j--){
            if (arr[j] > tmp){
                arr[j + 1] = arr[j];
                cnt++;
            }
            else break;
        }
        arr[j + 1] = tmp;
    }

    printf("%d", cnt);
}