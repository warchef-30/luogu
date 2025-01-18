#include <cstdio>
using namespace std;

int main(){
	double m, h, BMI;
	scanf("%lf%lf", &m, &h);
	BMI = m / h / h;

	if (BMI < 18.5) printf("Underweight");
	else if (BMI >= 18 && BMI < 24) printf("Normal");
	else{
		printf("%.6g\n", BMI);
		printf("Overweight");
	}
}