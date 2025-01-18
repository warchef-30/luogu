#include <iostream>
using namespace std;

int main(){
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == '-' && ((s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z') || (s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9'))){
            if (s[i + 1] - s[i - 1] > 1){
                if (p1 == 1){
                    if (p3 == 1){
                        for (char c = s[i - 1] + 1; c < s[i + 1]; c++){
                            for (int j = 0; j < p2; j++){
                                cout << c;
                            }
                        }
                    }

                    else if (p3 == 2){
                        for (char c = s[i + 1] - 1; c > s[i - 1]; c--){
                            for (int j = 0; j < p2; j++){
                                cout << c;
                            }
                        }
                    }
                }

                else if (p1 == 2 && s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z'){
                    if (p3 == 1){
                        for (char c = s[i - 1] - 32 + 1; c < s[i + 1] - 32; c++){
                            for (int j = 0; j < p2; j++){
                                cout << c;
                            }
                        }
                    }

                    else if (p3 == 2){
                        for (char c = s[i + 1] - 32 - 1; c > s[i - 1] - 32; c--){
                            for (int j = 0; j < p2; j++){
                                cout << c;
                            }
                        }
                    }
                }

                else if (p1 == 2 && s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9'){
                    if (p3 == 1){
                        for (char c = s[i - 1] + 1; c < s[i + 1]; c++){
                            for (int j = 0; j < p2; j++){
                                cout << c;
                            }
                        }
                    }

                    else if (p3 == 2){
                        for (char c = s[i + 1] - 1; c > s[i - 1]; c--){
                            for (int j = 0; j < p2; j++){
                                cout << c;
                            }
                        }
                    }
                }

                else if (p1 == 3){
                    for (int j = 0; j < (s[i + 1] - s[i - 1] - 1) * p2; j++){
                        cout << '*';
                    }
                }
            }

            else if (s[i + 1] - s[i - 1] == 1){
                continue;
            }

            else {
                cout << s[i];
            }
        }

        else cout << s[i];
    }
}