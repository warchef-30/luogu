#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    string str;
    while (getline(cin, str)){
        for (int i = 0; i < str.size(); i++){
            if (str[i] != ' ') cnt++;   
        }
    }
    cout << cnt << endl;
}