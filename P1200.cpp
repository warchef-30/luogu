#include <iostream>
using namespace std;

int main(){
    string com, gro;
    int c = 1, g = 1;
    cin >> com >> gro;

    for (int i = 0; com[i] != '\0'; i++){
        c *= (com[i] - 'A' + 1);
        //cout << c << endl;
    }
    c %= 47;

    for (int i = 0; gro[i] != '\0'; i++){
        g *= (gro[i] - 'A' + 1);
        //cout << g << endl;
    }
    g %= 47;

    if (c == g) cout << "GO";
    else cout << "STAY";
}