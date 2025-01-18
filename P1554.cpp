#include <iostream>
#include <cstring>
using namespace std;
int a[15];

int main(){
	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; i++){
		int tmp = i;
		while (tmp / 10 != 0){
			a[tmp % 10]++;
			tmp /= 10;
		}
		if (tmp != 0) a[tmp]++;
	}

	for (int i = 0; i <= 9; i++) cout << a[i] << " ";
}