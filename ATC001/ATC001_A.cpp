#include <bits/stdc++.h>
using namespace std;

int h, w;
vector<vector<char>> c;
vector<vector<int>> checked;

void dfs(int x, int y){
    if(x < 0 or x >= w or y < 0 or y >= h){
        return;
    }
    else if(checked[y][x] == 1){    //already checked
        return;
    }
    else if(c[y][x] == '#'){        //can not reachable.
        return;
    }
    checked[y][x] = 1;      //checkd.
    dfs(x + 1, y);
    dfs(x, y + 1);
    dfs(x - 1, y);
    dfs(x, y - 1);
    return;
}

int main(){
    // int h, w;
    cin >> h >> w;
    // vector<vector<char>> c(h, vector<char>(w));
    // vector<vector<int>> checked(h, vector<int>(w));
    c.resize(h, vector<char>(w));
    checked.resize(h, vector<int>(w, 0));
    int sx, sy, gx, gy;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                sx = j;
                sy = i;
            }
            if(c[i][j] == 'g'){
                gx = j;
                gy = i;
            }
        }
    }
    // cout << gx << endl;
    // cout << gy << endl;
    dfs(sx, sx);

    if(checked[gy][gx] == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}