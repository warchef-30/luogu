#include <cstdio>
using namespace std;

int main(){
    int s1, s2, s3;
    int ans[100] = {0};
    scanf("%d%d%d", &s1, &s2, &s3);
    for (int i = 1; i <= s1; i++){
        for (int j = 1; j <= s2; j++){
            for (int k = 1; k <= s3; k++){
                ans[i + j + k]++;
            }
        }
    }
    int max_count = 0, index;
    for (int i = 1; i <= 99; i++){
        if (ans[i] > max_count){
            max_count = ans[i];
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}