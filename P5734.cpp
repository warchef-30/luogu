#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, type;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        cin >> type;
        if (type == 1){
            string str;
            cin >> str;
            s += str;
            cout << s << endl;
        }
        else if (type == 2){
            int l, r;
            cin >> l >> r;
            s = s.substr(l, r);
            cout << s << endl;
        }
        else if (type == 3){
            int a;
            string str;
            cin >> a >> str;
            s.insert(a, str);
            cout << s << endl;
        }
        else if (type == 4){
            string str;
            cin >> str;
            cout << (int)s.find(str, 0) << endl;
        }
    }
}