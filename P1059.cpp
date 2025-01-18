#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> a(n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    sort(a.begin(), a.end());
    int cnt = unique(a.begin(), a.end()) - a.begin();
    printf("%d\n", cnt);

    for (int i = 0; i < cnt; i++)
        printf("%d ", a[i]);
}