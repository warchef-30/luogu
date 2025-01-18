#include <iostream>
#include <string>
using namespace std;

int main(){
	string n;
	cin >> n;

	int cnt = 0, flag = 0;
	while (n[cnt] != '\0') cnt++;

	if (n[0] == '-'){
		cout << "-";
		for (int i = cnt - 1; i >= 1; i--){
			if (flag == 0){
				if (n[i] != '0'){
					cout << n[i];
					flag = 1;
				}
				else continue;
			}
			else cout << n[i];
		}
	}

	else{
		for (int i = cnt - 1; i >= 0; i--){
			if (flag == 0){
				if (n[i] != '0'){
					cout << n[i];
					flag = 1;
				}
				else if (cnt == 1) cout << n[i];
				else continue;
			}
			else cout << n[i];
		}
	}
}