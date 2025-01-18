#include <cstdio>
using namespace std;

int main(){
	int arr[105], cnt = 0;
	while(1){
		scanf("%d", &arr[cnt]);
		if (arr[cnt] != 0) cnt++;
		else break;
	}

	for (int i = cnt - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
}