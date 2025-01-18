#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[105];

    if (n == 0){
        cin >> a[0];
        cout << a[0];
        return 0;
    }

    for (int i = 0; i <= n; i++){
        cin >> a[i];
        if (i == 0){
            if (a[i] == 1) cout << "x^" << n - i;
            else if (a[i] == -1) cout << "-x^" << n - i;
            else cout << a[i] << "x^" << n - i;
            continue;
        }
        if (i == n - 1){
            if (a[i] == 1) cout << "+x";
            else if (a[i] == -1) cout << "-x";
            else if (a[i] > 0) cout << "+" << a[i] << "x";
            else if (a[i] < 0) cout << a[i] << "x";
            continue;
        }
        if (i == n && a[i] > 0){
            cout << "+" << a[i];
            continue;
        }
        if (i == n && a[i] < 0){
            cout << a[i];
            continue;
        }

        if (a[i] > 0 && a[i] != 1) cout << "+" << a[i] << "x^" << n - i;
        else if (a[i] < 0 && a[i] != -1) cout << a[i] << "x^" << n - i;
        else if (a[i] == 1) cout << "+" << "x^" << n - i;
        else if (a[i] == -1) cout << "-" << "x^" << n - i;
        else if (a[i] == 0) continue;
    }
}