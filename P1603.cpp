#include <iostream>
#include <algorithm>
using namespace std;

int wordToNum(string word) {
    if (word == "one" || word == "a" || word == "first" || word == "another") return 1;
    if (word == "two" || word == "both" || word == "second") return 2;
    if (word == "three" || word == "third") return 3;
    if (word == "four") return 4;
    if (word == "five") return 5;
    if (word == "six") return 6;
    if (word == "seven") return 7;
    if (word == "eight") return 8;
    if (word == "nine") return 9;
    if (word == "ten") return 10;
    if (word == "eleven") return 11;
    if (word == "twelve") return 12;
    if (word == "thirteen") return 13;
    if (word == "fourteen") return 14;
    if (word == "fifteen") return 15;
    if (word == "sixteen") return 16;
    if (word == "seventeen") return 17;
    if (word == "eighteen") return 18;
    if (word == "nineteen") return 19;
    if (word == "twenty") return 20;
    else return 0;
}

string check(string str){
    while(str[0] == '0') str.erase(0, 1);
    return str;
}

int main(){
    string word;
    int num[10];
    int count = 0;

    while (cin >> word && word != "."){
        num[count] = (wordToNum(word) * wordToNum(word)) % 100;
        if (num[count] != 0) count++;
    }

    sort(num, num + count);

    cout << num[0];
    for (int i = 1; i < count; i++){
        if (num[i] < 10) cout << 0 << num[i];
        else cout << num[i];
    }
    cout << endl;
}
