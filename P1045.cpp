#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

struct Bigint{
    int a[1005];
    int len;

    Bigint(int x = 0){
        memset(a, 0, sizeof(a));
        for (len = 1; x; len++){
            a[len] = x % 10;
            x /= 10;
        }
        len--;
    }

    void flatten(int L){
        len = L;
        for (int i = 1; i <= len; i++){
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
            //cout << i << ":" << a[i] << " ";
        }
        for (; !a[len];) len--;
    }
};

Bigint operator* (Bigint a, Bigint b){
    Bigint c;
    int len = max(a.len, b.len);
    for (int i = 1; i <= min(505, len); i++){
        for (int j = 1; j <= min(505, len); j++){
            c.a[i + j - 1] += a.a[i] * b.a[j];
            //cout << i + j - 1 << " " << c.a[i + j - 1] << endl;
        }
    }
    c.flatten(505);
    //for (int i = 9; i >= 1; i--){
    //    cout << c.a[i];
    //}
    //cout << endl;
    return c;
}

Bigint qpow(Bigint a, int b){
    Bigint res(1);
    while (b){
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){
    long long p;
    cin >> p;

    double digit = p * log10(2) + 1;
    cout << (long long)digit << endl;

    Bigint a(2);
    Bigint ans = qpow(a, p);
    ans.a[1] -= 1;
    //cout << ans.len << endl;

    for (int i = 500; i >= 1; i--){
        cout << ans.a[i];
        if ((i - 1) % 50 == 0) cout << endl;
    }
    cout << endl;

    //Bigint test = Bigint(25) * Bigint(25);
    //cout << test.len << endl;
    //for (int i = 9; i >= 1; i--){
    //    cout << test.a[i];
    //}
    //cout << endl;
}