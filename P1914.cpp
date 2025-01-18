#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    n %= 26;

    for (int i = 0; i < s.size(); i++){
        s[i] = 'a' + (s[i] - 'a' + n) % 26;
    }
    cout << s;
}