#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int s, v, t, from_0;
	scanf("%d%d", &s, &v);

	t = ceil(1.0 * s / v) + 10;
	from_0 = 60 * (24 + 8);
	int delta_t = from_0 - t;

	int hh = (delta_t / 60) % 24;
	int mm = delta_t % 60;
	printf("%02d:%02d", hh, mm);
}