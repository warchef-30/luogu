#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define MAXN 10000

struct bigint{
    int num[MAXN];
    int len;

    bigint(int x = 0){
        memset(num, 0, sizeof(num));
        for (len = 1; x; len++){
            num[len] = x % 10;
            x /= 10;
        }
        len--;
    }

    void flatten(int l){
        len = l;
        for (int i = 1; i <= len; i++){
            num[i + 1] += num[i] / 10;
            num[i] %= 10;
        }
        for (; num[len] == 0; len--);
    }

    bigint operator*(int x){
        bigint ans;
        for (int i = 1; i <= len; i++){
            ans.num[i] = num[i] * x;
        }
        ans.flatten(len + 11);
        return ans;
    }
};

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n, a;
        cin >> n >> a;

        bigint fac(1);
        for (int j = 1; j <= n; j++){
            fac = fac * j;
        }

        int ans = 0;
        for (int j = 1; j <= fac.len; j++){
            if (fac.num[j] == a) ans++;
        }

        cout << ans << endl;
    }
}