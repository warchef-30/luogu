#include <iostream>
#include <string>
using namespace std;

struct student{
    string name;
    int age, score;
};

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        student ans;
        cin >> ans.name >> ans.age >> ans.score;
        ans.score *= 1.2;
        if (ans.score > 600) ans.score = 600;
        cout << ans.name << " " << ans.age + 1 << " " << ans.score << endl;
    }
}