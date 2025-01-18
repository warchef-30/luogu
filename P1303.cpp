#include <iostream>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    int a[2005] = {0}, b[2005] = {0};
    for (int i = 0; i < A.size(); i++) a[i] = A[A.size() - i - 1] - '0';
    for (int i = 0; i < B.size(); i++) b[i] = B[B.size() - i - 1] - '0';

    int ans[5005] = {0};
    for (int i = 0; i < A.size(); i++){
        for (int j = 0; j < B.size(); j++){
            ans[i + j] += a[i] * b[j];
        }
    }

    for (int i = 0; i < 5005; i++){
        ans[i + 1] += ans[i] / 10;
        ans[i] %= 10;
    }

    int len = 5005;
    while (len > 0 && ans[len] == 0) len--;
    
    for (int i = len; i >= 0; i--) cout << ans[i];
}