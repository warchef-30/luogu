#include <stdio.h>

void turn(char in, char* out){
    *out = in - 'a' + 'A';
}

int main(){
    char in, out;
    scanf("%c", &in);
    turn(in, &out);
    printf("%c", out);
}