#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[505] = {0}, b[505] = {0};
    string A, B;
    cin >> A >> B;

    for (int i = 0; i < A.size(); i++) a[i] = A[A.size() - i - 1] - '0';
    for (int i = 0; i < B.size(); i++) b[i] = B[B.size() - i - 1] - '0';

    int ans[505] = {0};
    for (int i = 0; i < max(A.size(), B.size()); i++){
        ans[i] += a[i] + b[i];
        ans[i + 1] += ans[i] / 10;
        ans[i] %= 10;
    }

    int len = 501;
    while (len > 0 && ans[len] == 0) len--;
    for (int i = len; i >= 0; i--) cout << ans[i];
}