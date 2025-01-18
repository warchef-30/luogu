#include <iostream>
#include <string>
using namespace std;
int nx[55], ny[55];
string type[55];

int main(){
    int i;
    cin >> i;
    string x, y;
    string tmp;

    for (int j = 1; j <= i; j++){
        int size = 0, res = 0;
        cin >> type[j];

        if (type[j] == "a" || type[j] == "b" || type[j] == "c"){
            cin >> x >> y;
            nx[j] = stoi(x), ny[j] = stoi(y);
        }

        else {
            x = type[j];
            cin >> y;
            nx[j] = stoi(x), ny[j] = stoi(y);
            type[j] = type[j - 1];
        }
    }

    for (int j = 1; j <= i; j++){
        int size = 0;
        if (type[j] == "a"){
            cout << nx[j] << "+" << ny[j] << "=" << nx[j] + ny[j] << endl;
            size += to_string(nx[j]).size() + to_string(ny[j]).size() + to_string(nx[j] + ny[j]).size() + 2;
        }
        else if (type[j] == "b"){
            cout << nx[j] << "-" << ny[j] << "=" << nx[j] - ny[j] << endl;
            size += to_string(nx[j]).size() + to_string(ny[j]).size() + to_string(nx[j] - ny[j]).size() + 2;
        }
        else {
            cout << nx[j] << "*" << ny[j] << "=" << nx[j] * ny[j] << endl;
            size += to_string(nx[j]).size() + to_string(ny[j]).size() + to_string(nx[j] * ny[j]).size() + 2;
        }
        cout << size << endl;
    }
}
