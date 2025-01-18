#include <iostream>
#include <vector>
using namespace std;
vector < vector < int > > arr, ans;

vector < vector < int > > scarlet_magic (int x, int y, int r, int z){
    x--;
    y--;

    if (z == 0){
        for (int i = x - r; i <= x + r; i++){
            for (int j = y - r; j <= y + r; j++){
                if (i >= 0 && i < arr.size() && j >= 0 && j < arr[0].size()){
                    int tmp_x = x + j - y;
                    int tmp_y = y + x - i;

                    if (tmp_x >= 0 && tmp_x < arr.size() && tmp_y >= 0 && tmp_y < arr[0].size()){
                        ans[tmp_x][tmp_y] = arr[i][j];
                    }
                }
            }
        }
    }

    else if (z == 1){
        for (int i = x - r; i <= x + r; i++){
            for (int j = y - r; j <= y + r; j++){
                if (i >= 0 && i < arr.size() && j >= 0 && j < arr[0].size()){
                    int tmp_x = x + y - j;
                    int tmp_y = y - x + i;

                    if (tmp_x >= 0 && tmp_x < arr.size() && tmp_y >= 0 && tmp_y < arr[0].size()){
                        ans[tmp_x][tmp_y] = arr[i][j];
                    }
                }
            }
        }
    }

    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;

    arr.resize(n, vector < int > (n));
    ans.resize(n, vector < int > (n));
    
    int tmp = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = tmp;
            ans[i][j] = tmp;
            tmp++;
        }
    }

    int x, y, r, z;
    for (int i = 0; i < m; i++){
        cin >> x >> y >> r >> z;
        ans = scarlet_magic(x, y, r, z);
        arr = ans;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}