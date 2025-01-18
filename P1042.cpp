#include <cstdio>
using namespace std;
int sco[62505];

int main(){
    char s;
    int i = 0;

    while(1){
        scanf("%c", &s);
        if (s == 'E') break;
        else if (s == 'W') sco[i++] = 1;
        else if (s == 'L') sco[i++] = 0;
    }

    int hua = 0, opp = 0;
    for (int j = 0; j < i; j++){
        if (sco[j] == 1) hua++;
        else if (sco[j] == 0) opp++;

        if ((hua >= 11 && hua - opp >= 2) || (opp >= 11 && opp - hua >= 2)){
            printf("%d:%d\n", hua, opp);
            hua = 0;
            opp = 0;
        }
    }

    printf("%d:%d\n\n", hua, opp);

    hua = 0, opp = 0;
    for (int j = 0; j < i; j++){
        if (sco[j] == 1) hua++;
        else if (sco[j] == 0) opp++;

        if ((hua >= 21 && hua - opp >= 2) || (opp >= 21 && opp - hua >= 2)){
            printf("%d:%d\n", hua, opp);
            hua = 0;
            opp = 0;
        }
    }

    printf("%d:%d\n", hua, opp);
}