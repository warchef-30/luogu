#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
	char num[100];
	cin >> num;
	int jud = 0, digit = 1, last;
	int i = 0;

	for (; num[i] != '\0'; i++){
		int a;
		if (num[i] != '-'){
			char pre = num[i];
			sscanf(&pre, "%d", &a);
			jud += a * digit;
			digit++;
			last = a;
		}
	}

	jud -= last * 10;
	jud = jud % 11;

	if (jud == 10){
		if (num[i - 1] == 'X') printf("Right");
		else{
			num[i - 1] = 'X';
			for(int j = 0; j <= i - 1; j++){
				printf("%c", num[j]);
			}	
		}
	}

	else if (jud == last) {
		printf("Right");
	}

	else{
		sprintf(&num[i - 1], "%d", jud);
		for(int j = 0; j <= i - 1; j++){
			printf("%c", num[j]);
		}
	}	
}