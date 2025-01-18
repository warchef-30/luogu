#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

struct node{
    int id, score;
};

bool cmp(node a, node b){
    if (a.score != b.score) return a.score > b.score;
    else return a.id < b.id;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    vector<node> arr(n + 1);
    for (int i = 0; i < n; i++){
        scanf("%d%d", &arr[i].id, &arr[i].score);
    }

    sort(arr.begin(), arr.end(), cmp);

    int num = (int)floor(m * 1.5);
    while (arr[num].score == arr[num - 1].score) num++;

    printf("%d %d\n", arr[num - 1].score, num);
    for (int i = 0; i < num; i++){
        printf("%d %d\n", arr[i].id, arr[i].score);
    }
    return 0;
}