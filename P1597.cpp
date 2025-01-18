#include <iostream>
using namespace std;
int ans[5] = {0};

int letter_num(string str, int i){
    if (str[i + 3] == 'a' || str[i + 3] == 'b' || str[i + 3] == 'c') return ans[str[i + 3] - 97];
    else return (str[i + 3] - 48);
}

int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if ((s[i] == 'a' || s[i] == 'b' || s[i] == 'c') && s[i + 1] == ':') ans[s[i] - 97] = letter_num(s, i);
    }

    for (int i = 0; i <= 2; i++){
        cout << ans[i] << " ";
    }
}