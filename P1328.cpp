#include <iostream>
using namespace std;
int a[205], b[205];

int judge(int x, int y){
    if (x == 0){
        if (y == 0) return 2;
        else if (y == 1 || y == 4) return 0;
        else return 1;
    }

    else if (x == 1){
        if (y == 1) return 2;
        else if (y == 2 || y == 4) return 0;
        else return 1;
    }

    else if (x == 2){
        if (y == 2) return 2;
        else if (y == 0 || y == 3) return 0;
        else return 1;
    }

    else if (x == 3){
        if (y == 3) return 2;
        else if (y == 0 || y == 1) return 0;
        else return 1;
    }

    else if (x == 4){
        if (y == 4) return 2;
        else if (y == 2 || y == 3) return 0;
        else return 1;
    }

    else return -1;
}

int main(){
    int n, na, nb;
    cin >> n >> na >> nb;

    for (int i = 0; i < na; i++){
        cin >> a[i];
    }

    for (int i = 0; i < nb; i++){
        cin >> b[i];
    }

    int a_sco = 0, b_sco = 0;
    int a_tmp = 0, b_tmp = 0;
    for (int i = 0; i < n; i++){
        if (a_tmp >= na) a_tmp = 0;
        if (b_tmp >= nb) b_tmp = 0;

        if (judge(a[a_tmp], b[b_tmp]) == 1) a_sco++;
        else if (judge(a[a_tmp], b[b_tmp]) == 0) b_sco++;
        a_tmp++;
        b_tmp++;
    }

    cout << a_sco << " " << b_sco;
}