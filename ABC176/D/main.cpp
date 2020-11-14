#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

class position{
public:
    int h, w;
    void pt(){
        cout << h << ' ' << w << endl;
    }
};

const int MAZE_MAX = 1e3 + 5;
vector<vector<int>> numOfGp(MAZE_MAX, vector<int>(MAZE_MAX, -1));
vector<string> field(MAZE_MAX);
int h, w;
position start, goal;
queue<position> q;
int ans = 0;
int presentGpNum = 0;
position dp[4] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
position warp[20] = {
    {-2, -2}, {-2, -1}, {-2, 0}, {-2, 1}, {-2, 2},
    {-1, -2}, {-1, -1}, {-1, 1}, {-1, 2},
    {0, -2}, {0, 2},
    {1, -2}, {1, -1}, {1, 1}, {1, 2},
    {2, -2}, {2, -1}, {2, 0}, {2, 1}, {2, 2}};
    

void bfs(){
    // cout << presentGpNum << endl;
    while(!q.empty()){
        auto present = q.front(); q.pop();
        numOfGp[present.h][present.w] = presentGpNum;
        for(int i = 0; i < 4; i++){
            position next = {present.h + dp[i].h, present.w + dp[i].w};
            if(next.h < 0 || next.h >= h || next.w < 0 || next.w >= w) continue;
            if(field[next.h][next.w] == '#') continue;
            if(numOfGp[next.h][next.w] != -1) continue;
            // cout << next.h << ' ' << next.w << endl;
        //     cout << "p:";
        //     present.pt();
        //     cout << "n:";
        //     next.pt();
        //     q.push(next);
        }
    }
    // for(int i = 0; i < h; i++){
    //     for(int j = 0; j < w; j++){
    //         cout << numOfGp[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    return;
}

void tereport(){
    const int gp = presentGpNum;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            position present = {i, j};
            if(numOfGp[present.h][present.w] != gp) continue;
            for(auto dw : warp){
                position next = {present.h + dw.h, present.w + dw.w};
                if(next.h < 0 || next.h >= h || next.w < 0 || next.w >= w) continue;
                if(field[next.h][next.w] == '#') continue;
                if(numOfGp[next.h][next.w] != -1) continue;
                q.push(next);
                // numOfGp[next.h][next.w] = 100;
                // if(next.h == 1 && next.w == 4){
                //     present.pt();
                //     next.pt();
                // }
            }
        }
    }
    // for(int i = 0; i < h; i++){
    //     for(int j = 0; j < w; j++){
    //         cout << numOfGp[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    return;
}

int main(){
    {
        cin >> h >> w;
        cin >> start.h >> start.w;
        cin >> goal.h >> goal.w;
        start.h--; start.w--;
        goal.h--; goal.w--;
        rep(i, h){
            cin >> field[i];
        }
    }

    q.push(start);
    // bfs();
    while(1){
        // cout << "Call BFS" << endl;
        bfs();
        // cout << "TEREPORT" << endl;
        tereport();
        presentGpNum++;
        if(q.empty()) break;
        // bfs();
        // break;
        // cout << presentGpNum << endl;
        // bfs();
        // break;
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << numOfGp[i][j] << ' ';
        }
        cout << endl;
    }
    cout << numOfGp[goal.h][goal.w] << endl;
    return 0;
}