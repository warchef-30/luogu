#include <cstdio>
#include <cmath>
using namespace std;

double peri(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main(){
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    double ans = 0;
    ans += peri(x1, y1, x2, y2);
    ans += peri(x1, y1, x3, y3);
    ans += peri(x2, y2, x3, y3);
    printf("%.2lf", ans);
}