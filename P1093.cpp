#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student{
    int id;
    int chi, eng, mat;
    int total;
};

bool cmp(student a, student b){
    if (a.total != b.total) return a.total > b.total;
    else if (a.chi != b.chi) return a.chi > b.chi;
    else return a.id < b.id;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<student> arr(n);

    for (int i = 0; i < n; i++){
        arr[i].id = i + 1;
        scanf("%d%d%d", &arr[i].chi, &arr[i].mat, &arr[i].eng);
        arr[i].total = arr[i].chi + arr[i].mat + arr[i].eng;
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < 5; i++)
        printf("%d %d\n", arr[i].id, arr[i].total);
}