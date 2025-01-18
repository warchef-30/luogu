#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct candidate{
    string vote;
    int num;
};

bool cmp(candidate a, candidate b){
    if (a.vote.size() != b.vote.size()) return a.vote.size() > b.vote.size();
    else return a.vote > b.vote;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<candidate> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i].vote;
        arr[i].num = i + 1;
    }

    sort(arr.begin(), arr.end(), cmp);

    printf("%d\n", arr[0].num);
    cout << arr[0].vote;
}