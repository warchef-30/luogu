#include <cstdio>
using namespace std;
int x, y, z;

void order(int *a, int *b, int *c){
	if (*a >= *b && *a >= *c){
		if (*b >= *c){
			x = *a; y = *b; z = *c;
		}
		else{
			x = *a; y = *c; z = *b;
		}
	}

	else if (*b >= *a && *b >= *c){
		if (*a >= *c){
			x = *b; y = *a; z = *c;
		}
		else{
			x = *b; y = *c; z = *a;
		}
	}

	else if (*c >= *a && *c >= *b){
		if (*a >= *b){
			x = *c; y = *a; z = *b;
		}
		else{
			x = *c; y = *b; z = *a;
		}
	}
}

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    order(&a, &b, &c);
    
    for (int i = 2; i * i <= z; i++){
    	if (x % i == 0 && z % i == 0){
    		x /= i;
    		z /= i;
    	}
    }

    printf("%d/%d", z, x);
}