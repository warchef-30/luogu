#include <cstdio>
using namespace std;

int main(){
	int a, b, c;
	int x, y, z;
	scanf("%d%d%d", &a, &b, &c);

	if (a >= b && a >= c){
		if (b >= c){
			x = a; y = b; z = c;
		}
		else{
			x = a; y = c; z = b;
		}
	}

	else if (b >= a && b >= c){
		if (a >= c){
			x = b; y = a; z = c;
		}
		else{
			x = b; y = c; z = a;
		}
	}

	else if (c >= a && c >= b){
		if (a >= b){
			x = c; y = a; z = b;
		}
		else{
			x = c; y = b; z = a;
		}
	}

	//printf("asjhkhkdsa%d%d%d\n\n", x, y, z);

	if (y + z <= x){
		printf("Not triangle\n");
		return 0;
	}
	if (y * y + z * z == x * x) printf("Right triangle\n");
	if (y * y + z * z > x * x) printf("Acute triangle\n");
	if (y * y + z * z < x * x) printf("Obtuse triangle\n");
	if (x == y || x == z || y == z) printf("Isosceles triangle\n");
	if (x == y && y == z) printf("Equilateral triangle\n");
}