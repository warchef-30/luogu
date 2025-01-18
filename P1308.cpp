#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, str;
    getline(cin, a);
    getline(cin, str);
    
    for (int i = 0; i <= a.size(); i++){
        if (a[i] >= 'A' && a[i] <= 'Z'){
            a[i] += 32;
        }
    }
    for (int i = 0; i <= str.size(); i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }

    a = " " + a + " ";
    str = " " + str + " ";

    int cnt = 0;

    if ((int)str.find(a, 0) == -1){
        cout << -1 << endl;
    }
    else {
        int pos = (int)str.find(a, 0);
        int firstpos = pos;
        while (pos != -1){
            cnt++;
            pos = (int)str.find(a, pos + 1);
        }
        cout << cnt << " " << firstpos << endl;
    }
}