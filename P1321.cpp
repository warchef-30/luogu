#include <iostream>
using namespace std;

int next(string s, int pos){
    while (1){
        if (s[pos] == 'b'){
            if (s[pos + 1] == 'o'){
                if (s[pos + 2] == 'y'){
                    return pos + 3;
                }
                else return pos + 2;
            }
            else return pos + 1;
        }

        else if (s[pos] == 'o'){
            if (s[pos + 1] == 'y'){
                return pos + 2;
            }
            else return pos + 1;
        }

        else if (s[pos] == 'y'){
            return pos + 1;
        }

        else if (s[pos] == 'g'){
            if (s[pos + 1] == 'i'){
                if (s[pos + 2] == 'r'){
                    if (s[pos + 3] == 'l'){
                        return pos + 4;
                    }
                    else return pos + 3;
                }
                else return pos + 2;
            }
            else return pos + 1;
        }
        
        else if (s[pos] == 'i'){
            if (s[pos + 1] == 'r'){
                if (s[pos + 2] == 'l'){
                    return pos + 3;
                }
                else return pos + 2;
            }
            else return pos + 1;
        }

        else if (s[pos] == 'r'){
            if (s[pos + 1] == 'l'){
                return pos + 2;
            }
            else return pos + 1;
        }

        else if (s[pos] == 'l'){
            return pos + 1;
        }
    }
}


int main(){
    string str;
    cin >> str;

    int boy = 0, girl = 0;
    int i = 0;
    while (i < str.size()){
        if (str[i] == '.'){
            i++;
            continue;
        }

        else if (str[i] == 'b' || str[i] == 'o' || str[i] == 'y'){
            boy++;
            i = next(str, i);
            //cout << "aaaaaa" << i << endl;
        }

        else if (str[i] == 'g' || str[i] == 'i' || str[i] == 'r' || str[i] == 'l'){
            girl++;
            i = next(str, i);
            //cout << "bbbbbb" << i << endl;
        }
    }

    cout << boy << endl << girl << endl;
}