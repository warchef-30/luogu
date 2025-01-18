#include <iostream>
using namespace std;

struct student{
    int id, academic, quality;
    double overall;

    student(int i, int a, int q){
        this->id = i;
        this->academic = a;
        this->quality = q;
        this->overall = a * 7.0 + q * 3.0;
    }
    student(){}

    int sum(){
        return academic + quality;
    }
};

bool excellent(student s){
    if (s.sum() > 140 && s.overall >= 800) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int tmp_id, tmp_academic, tmp_quality;
        cin >> tmp_id >> tmp_academic >> tmp_quality;
        struct student tmp_student(tmp_id, tmp_academic, tmp_quality);

        if (excellent(tmp_student)) cout << "Excellent" << endl;
        else cout << "Not excellent" << endl;
    }
}