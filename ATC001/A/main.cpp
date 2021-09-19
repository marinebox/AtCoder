#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;

const string YES = "Yes";
const string NO = "No";

class position{
public:
    int h;
    int w;
};

const position dp[4] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int h, w;
vector<string> field;
vector<vector<bool>> isVisited(510, vector<bool>(510, false));
stack<position> q;

void dfs(){
    while(!q.empty()){
        auto present = q.top(); q.pop();
        isVisited[present.h][present.w] = true;
        for(int i = 0; i < 4; i++){
            position next = {present.h + dp[i].h, present.w + dp[i].w};
            if(next.h < 0 || next.h >= h || next.w < 0 || next.w >= w) continue;
            if(field[next.h][next.w] == '#') continue;
            if(isVisited[next.h][next.w]) continue;
            q.push(next);
        }
    }
    return;
}

int main(){
    cin >> h >> w;
    position start, goal;
    rep(i, h){
        string s;
        rep(j, w){
            char c;
            cin >> c;
            if(c == 's') start = {i, j};
            if(c == 'g') goal = {i, j};
            s.push_back(c);
        }
        field.push_back(s);
    }

    q.push(start);
    dfs();
    cout << (isVisited[goal.h][goal.w] ? YES : NO ) << endl;
    return 0;
}

// void dfs(int x, int y, vector<vector<char>> &c, int w, int h, bool &flag, vvbool &visited){
//     if(x >= w || x < 0 || y >= h || y < 0) return;
//     if(visited[y][x]) return;
//     if(c[y][x] == '#') return;
//     if(c[y][x] == 'g'){
//         flag = true;
//         return;
//     }
//     visited[y][x] = true;
//     dfs(x - 1, y, c, w, h, flag, visited);
//     if(flag) return;
//     dfs(x + 1, y, c, w, h, flag, visited);
//     if(flag) return;
//     dfs(x, y - 1, c, w, h, flag, visited);
//     if(flag) return;
//     dfs(x, y + 1, c, w, h, flag, visited);
//     return;
// }

// int main(){
//     int h, w;
//     cin >> h >> w;
//     vector<vector<char>> c(h, vector<char>(w));
//     int sx, sy;
//     // int gx, gy;
//     rep(i, h){
//         rep(j, w){
//             char tc;
//             cin >> tc;
//             c[i][j] = tc;
//             if(tc == 's'){
//                 sx = j;
//                 sy = i;
//             }
//         }
//     }

//     // where is start point?
//     // sx and sy is start point.
//     bool flag = false;
//     vvbool visited(h, vector<bool>(w, false));
//     dfs(sx, sy, c, w, h, flag, visited);
//     string ans = NO;
//     if(flag) ans = YES;
//     cout << ans << endl;
//     return 0;
// }
