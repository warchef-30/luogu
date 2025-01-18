#include <iostream>
using namespace std;
char map[10][10];
#define MAXN 100000

struct coord{
    int x, y;
};

void move(coord &x, int &dir){
    if (dir == 1){
        if (map[x.x - 1][x.y] != '*' && x.x - 1 >= 0) x.x--;
        else dir = 2;
    }
    else if (dir == 2){
        if (map[x.x][x.y + 1] != '*' && x.y + 1 < 10) x.y++;
        else dir = 3;
    }
    else if (dir == 3){
        if (map[x.x + 1][x.y] != '*' && x.x + 1 < 10) x.x++;
        else dir = 4;
    }
    else if (dir == 4){
        if (map[x.x][x.y - 1] != '*' && x.y - 1 >= 0) x.y--;
        else dir = 1;
    }
}

int main(){
    coord call, farmer;
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin >> map[i][j];
            if (map[i][j] == 'C') call.x = i, call.y = j;
            else if (map[i][j] == 'F') farmer.x = i, farmer.y = j;
        }
    }

    int time = 0;
    int call_dir = 1, farmer_dir = 1;
    for (time = 0; time < MAXN; time++){
        if (call.x == farmer.x && call.y == farmer.y){
            cout << time;
            return 0;
        }

        move(call, call_dir);
        move(farmer, farmer_dir);
    }
    cout << "0";
}