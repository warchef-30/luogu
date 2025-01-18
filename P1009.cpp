#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct bigint{
	int len, arr[100];
	bigint (int x = 0){
		memset(arr, 0, sizeof(arr));
		for (len = 0; x != 0; len++){
			arr[len] = x % 10;
			x /= 10;
		}
	}

	void flatten (int L){
		len = L;
		for (int i = 0; i < L; i++){
			arr[i + 1] += arr[i] / 10;
			arr[i] %= 10;
		}

		while (arr[len - 1] == 0) len--;
	}

	void print(){
		for (int i = len - 1; i >= 0; i--) cout << arr[i];
	}
};

bigint operator+ (bigint x, bigint y){
	bigint ans;
	for (int i = 0; i < max(x.len, y.len); i++){
		ans.arr[i] = x.arr[i] + y.arr[i];
	}
	ans.flatten(max(x.len, y.len));
	return ans;
}

bigint operator* (bigint x, int y){
	bigint ans;
	for (int i = 0; i < x.len; i++){
		ans.arr[i] += x.arr[i] * y; 
	}
	ans.flatten(x.len + 11);
	return ans;
}

int main(){
	int n;
	cin >> n;
	bigint tmp(1), sum(0);

	for (int i = 1; i <= n; i++){
		tmp = tmp * i;
		sum = sum + tmp;
	}

	sum.print();
}