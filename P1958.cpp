#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int ans[30] = {0};

int main(){
    string str;

    for (int i = 0; i < 4; i++){
        getline(cin, str);
        for (int j = 0; j < str.size(); j++){
          if (str[j] >= 'A' && str[j] <= 'Z'){
              ans[str[j] - 'A']++;
          }
        }
    }

    int maxn = 0;
    for (int i = 0; i < 26; i++){
        maxn = max(maxn, ans[i]);
    }

    for (int i = maxn; i > 0; i--){
        for (int j = 0; j < 26; j++){
          if (ans[j] >= i) cout << "*";
          else cout << " ";
          cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 26; i++){
        cout << (char)('A' + i) << " ";
    }
}