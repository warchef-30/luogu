#include <iostream>
using namespace std;
const int MAXN = 1e6 + 5;

struct toy {
    int direction;
    string name;
} arr[MAXN];

int main(){
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> arr[i].direction >> arr[i].name;
    }

    int a, s, tmp = 0;
    for (int i = 0; i < m; i++){
        cin >> a >> s;

        if (a == 0 && arr[tmp].direction == 0){
            tmp = (tmp + n - s) % n;
        }

        else if (a == 0 && arr[tmp].direction == 1){
            tmp = (tmp + s) % n;
        }

        else if (a == 1 && arr[tmp].direction == 0){
            tmp = (tmp + s) % n;
        }

        else if (a == 1 && arr[tmp].direction == 1){
            tmp = (tmp + n - s) % n;
        }
    }

    cout << arr[tmp].name;
}