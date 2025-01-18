#include <iostream>
using namespace std;

int stat(string s){
    int cnt = 0;
    int pos = (int)s.find("VK", 0);
    while (pos != -1){
        pos = (int)s.find("VK", pos + 1);
        cnt++;
    }
    return cnt;
}

int main(){
    int n;
    string str;
    cin >> n >> str;

    int max = stat(str);

    for (int i = 0; i < str.size(); i++){
        if (str[i] == 'V'){
            str[i] = 'K';
            if (stat(str) > max){
                max = stat(str);
            }
            str[i] = 'V';
        }

        else if (str[i] == 'K'){
            str[i] = 'V';
            if (stat(str) > max){
                max = stat(str);
            }
            str[i] = 'K';
        }
    }

    cout << max << endl;
}