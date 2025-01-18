#include <iostream>
using namespace std;

struct student{
    string name;
    int chi, mat, eng;
} tmp, ans;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp.name >> tmp.chi >> tmp.mat >> tmp.eng;
        if (i == 0){
            ans = tmp;
            continue;
        }
        
        if (tmp.chi + tmp.mat + tmp.eng > ans.chi + ans.mat + ans.eng) ans = tmp;
    }

    cout << ans.name << " " << ans.chi << " " << ans.mat << " " << ans.eng;
}