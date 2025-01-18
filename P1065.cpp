#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;

struct workpiece{
    int machine, time;
    int start, finish;
};

int find(vector<vector<workpiece> > &arr, vector<vector<bool> > &time, vector<vector<bool> > &process, int machine, int number, int process_number){
    int start;
    if (process_number == 1) {  // 第一道工序总是从0开始找
        start = 1;
    }
    else {  // 后续工序从上一道工序结束后开始找
        start = arr[number][process_number - 1].finish + 1;
    }
    
    for (int i = start; i <= time[machine].size() - 1; i++) {
        bool can_use = true;
        // 检查从i开始的连续time个时间点是否都空闲
        for (int j = 0; j < arr[number][process_number].time; j++) {
            if (time[machine][i + j]) {
                can_use = false;
                break;
            }
        }
        if (can_use) {
            return i;  // 找到第一个满足条件的时间点就返回
        }
    }

    for (int i = start; i <= time[machine].size() - 1; i++) {
        if (time[machine][i] == 0) {
            return i;
        }
    }
    return -1;
}

int main(){
    cin >> m >> n;
    
    vector<int> order(m * n + 1);
    vector<vector<workpiece> > arr(n + 1, vector<workpiece>(m + 1));
    vector<vector<bool> > process_judge(n + 1, vector<bool>(m + 1));
    
    for (int i = 1; i <= m * n; i++){
        cin >> order[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> arr[i][j].machine;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> arr[i][j].time;
        }
    }
    int max_possible_time = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            max_possible_time += arr[i][j].time;
        }
    }
    vector<vector<bool> > time_judge(m + 1, vector<bool>(max_possible_time + 1));
    vector<int> tmp_process(m * n + 1, 0);

    for (int i = 1; i <= m * n; i++){

        tmp_process[order[i]]++;
        //cout << "order: " << order[i] << " tmp_process: " << tmp_process[order[i]] << endl;
        //cout << "machine: " << arr[order[i]][tmp_process[order[i]]].machine << endl;

        arr[order[i]][tmp_process[order[i]]].start = find(arr, time_judge, process_judge, arr[order[i]][tmp_process[order[i]]].machine, order[i], tmp_process[order[i]]);
        arr[order[i]][tmp_process[order[i]]].finish = arr[order[i]][tmp_process[order[i]]].start + arr[order[i]][tmp_process[order[i]]].time - 1;
        //cout << "start: " << arr[order[i]][tmp_process[order[i]]].start << " finish: " << arr[order[i]][tmp_process[order[i]]].finish << " time: " << arr[order[i]][tmp_process[order[i]]].time << endl;

        int machine = arr[order[i]][tmp_process[order[i]]].machine;
        int time = arr[order[i]][tmp_process[order[i]]].time;

        if(arr[order[i]][tmp_process[order[i]]].start != -1) {
            for (int j = arr[order[i]][tmp_process[order[i]]].start; j <= arr[order[i]][tmp_process[order[i]]].finish; j++){
                time_judge[machine][j] = 1;
            }
            process_judge[order[i]][tmp_process[order[i]]] = 1;
        }
    }

    int max_time = 0;
    for (int i = 1; i <= m; i++){
        for (int j = time_judge[i].size() - 1; j >= 0; j--){
            if (time_judge[i][j] == 0){
                //cout << "ayayayayay" << endl;
                time_judge[i].resize(j);
                //cout << time_judge[i].size() << endl;
            }
            else break;
        }
        max_time = max(max_time, (int)time_judge[i].size() - 1);
    }
    cout << max_time << endl;
}