#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int place_count[7] = {1, 2, 2, 4, 7, 25, 100000};
string place_name[7] = {"BangZhu", "FuBangZhu", "HuFa", "ZhangLao", "TangZhu", "JingYing", "BangZhong"};

struct member{
    string name, place;
    int banggong, lv;
    int index;
};

bool cmp_1(member a, member b){
    if (a.banggong != b.banggong) return a.banggong > b.banggong;
    else return a.index < b.index;
}

bool cmp_2(member a, member b){
    if (a.lv != b.lv) return a.lv > b.lv;
    else return a.index < b.index;
}

int main(){
    int n;
    cin >> n;
    vector<member> arr(n);
    vector<member> fixed;
    vector<member> others;

    for (int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].place >> arr[i].banggong >> arr[i].lv;
        arr[i].index = i;

        if (arr[i].place == "BangZhu" || arr[i].place == "FuBangZhu"){
            fixed.push_back(arr[i]);
        }
        else {
            others.push_back(arr[i]);
        }
    }

    for (int i = 0; i < 3; i++){
        cout << fixed[i].name << " " << fixed[i].place << " " << fixed[i].lv << endl;
    }

    sort(others.begin(), others.end(), cmp_1);
    
    int cnt = 3;

    for (int i = 2; i < 7; i++){
        if (cnt + place_count[i] > n){
            sort(others.begin() + cnt - 3, others.end(), cmp_2);

            for (int j = 0; j < n - cnt; j++){
                cout << others[cnt + j - 3].name << " " << place_name[i] << " " << others[cnt + j - 3].lv << endl;
            }
            break;
        }

        else {
            sort(others.begin() + cnt - 3, others.begin() + cnt - 3 + place_count[i], cmp_2);

            for (int j = 0; j < place_count[i]; j++){
                cout << others[cnt + j - 3].name << " " << place_name[i] << " " << others[cnt + j - 3].lv << endl;
            }
        }
        cnt += place_count[i];
    }
}