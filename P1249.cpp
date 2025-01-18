#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

struct Bigint{
    int num[100000];
    int len;

    Bigint(int x = 0){
        memset(num, 0, sizeof(num));
        for (len = 1; x; len++){
            num[len] = x % 10;
            x /= 10;
        }
        len--;
    }

    void flatten(int L){
        len = L;
        for (int i = 1; i <= len; i++){
            num[i + 1] += num[i] / 10;
            num[i] %= 10;
        }
        for (; num[len] == 0; len--);
    }

    void print(){
        for (int i = max(len, 1); i >= 1; i--){
            cout << num[i];
        }
        cout << endl;
    }
};

Bigint operator*(Bigint a, int b){
    Bigint c;
    int len = a.len;
    for (int i = 1; i <= len; i++){
        c.num[i] = a.num[i] * b;
    }
    c.flatten(len + 11);
    return c;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    Bigint ans(1);

    int tmp = 2;
    int sum = 0, index = 0;
    while (sum < n){
        arr[index + 1] = tmp;
        sum += tmp;

        //cout << "index: " << index + 1 << endl;
        //cout << "tmp: " << tmp << endl;
        //cout << "sum: " << sum << endl;

        tmp++, index++;

        if (sum >= n) break;
    }

    //for (int i = 1; i <= index; i++){
        //cout << arr[i] << " ";
    //}
    //cout << endl;

    if (sum != n){
        if (sum - n == 1){
            arr.erase(arr.begin() + 1);
            arr[index - 1]++;
        }

        else {
            vector<int>::iterator pos = find(arr.begin(), arr.end(), sum - n);
            arr.erase(pos);
        }
    }

    if (sum == n){
        for (int i = 1; i <= index; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        for (int i = 1; i <= index; i++){
            ans = ans * arr[i];
        }
    }
    else {
        for (int i = 1; i <= index - 1; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        for (int i = 1; i <= index - 1; i++){
            ans = ans * arr[i];
        }
    }
    ans.print();
    return 0;
}