#include <iostream>
using namespace std;

string reverse (string &str, int type){
    string ans = str;

    //整数
    if (type == 1){
        //反转
        for (int i = 0; i < str.size(); i++){
            ans[i] = str[str.size() - i - 1];
        }

        //删除前导0
        int check = 0;
        while (ans[check] == '0'){
            ans.erase(check, 1);
        }
        if (ans.size() == 0) ans = "0";
        return ans;
    }

    //小数
    else if (type == 2){
        int dot = 0;
        while (ans[dot] != '.') dot++;

        //反转
        for (int i = 0; i < dot; i++){
            ans[i] = str[dot - i - 1];
        }
        for (int i = dot + 1; i < str.size(); i++){
            ans[i] = str[str.size() + dot - i];
        }

        //删除前导0
        while (ans[0] == '0'){
            ans.erase(0, 1);
        }
        if (ans[0] == '.') ans = "0" + ans;

        //删除后导0
        while (ans[ans.size() - 1] == '0'){
            ans.erase(ans.size() - 1, 1);
        }
        if (ans[ans.size() - 1] == '.') ans = ans + "0";

        return ans;
    }

    //分数
    else if (type == 3){
        int slash = 0;
        while (ans[slash] != '/') slash++;

        //反转
        for (int i = 0; i < slash; i++){
            ans[i] = str[slash - i - 1];
        }
        for (int i = slash + 1; i < str.size(); i++){
            ans[i] = str[str.size() + slash - i];
        }

        //删除分子前导0
        while (ans[0] == '0'){
            ans.erase(0, 1);
        }
        if (ans[0] == '/') ans = "0" + ans;

        //删除分母前导0
        slash = 0;
        while (ans[slash] != '/') slash++;

        while (ans[slash + 1] == '0'){
            ans.erase(slash + 1, 1);
        }
        if (ans[slash + 1] == '/') ans[slash + 1] = '0';

        return ans;
    }

    //百分数
    else if (type == 4){
        //反转
        for (int i = 0; i < str.size() - 1; i++){
            ans[i] = str[str.size() - i - 2];
        }
        ans[str.size() - 1] = '%';

        //删除前导0
        while (ans[0] == '0'){
            ans.erase(0, 1);
        }
        if (ans[0] == '%') ans = "0" + ans;

        return ans;
    }

    else return "error";
}

int main(){
    string str;
    cin >> str;
    int type = 0;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == '.') type = 2;
        else if (str[i] == '/') type = 3;
        else if (str[i] == '%') type = 4;
    }
    if (type == 0) type = 1;

    cout << reverse(str, type);
}