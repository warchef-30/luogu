#include <iostream>
#include <cmath>
using namespace std;

struct student{
    string name;
    int chi, mat, eng;
};
struct student ans[1005];

bool check(int a, int b, int c){
    if (fabs(a - b) <= c) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> ans[i].name >> ans[i].chi >> ans[i].mat >> ans[i].eng;
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (check(ans[i].chi, ans[j].chi, 5)
            && check(ans[i].mat, ans[j].mat, 5)
            && check(ans[i].eng, ans[j].eng, 5)
            && check(ans[i].chi + ans[i].mat + ans[i].eng, ans[j].chi + ans[j].mat + ans[j].eng, 10)) cout << ans[i].name << " " << ans[j].name << endl;
        }
    }
}