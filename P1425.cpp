#include <cstdio>
using namespace std;

int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int delta_t = (c * 60 + d) - (a * 60 + b);
	int hou = delta_t / 60;
	int min = delta_t % 60;
	printf("%d %d", hou, min);
}