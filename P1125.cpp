#include <iostream>
using namespace std;
int cnt[30];

bool is_prime(int n){
    if (n == 0 || n == 1) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        cnt[s[i] - 'a' + 1]++;
    }
    int maxn = 0, minn = 105;
    for (int i = 1; i <= 26; i++){
        if (cnt[i] >maxn) maxn = cnt[i];
        if (cnt[i] < minn && cnt[i] != 0) minn = cnt[i];
    }
    if (is_prime(maxn - minn)) cout << "Lucky Word" << endl << maxn - minn;
    else cout << "No Answer" << endl << 0;
}