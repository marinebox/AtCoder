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

const string YES = "Yes";

// vint dist(1e5, -1);
// vvint path(1e5);
// vint ans(1e5);

int main(){
    int n, m;
    cin >> n >>m;
    vvint path(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        path[a - 1].push_back(b - 1);
        path[b - 1].push_back(a - 1);
    }

    // vbool isVisited(n, false);
    // vint dist(n, -1);
    queue<int> que;
    que.push(0);
    vint ans(n, -1);
    // ans[0] = 0;
    while(!que.empty()){
        int roomNum = que.front();
        que.pop();
        // isVisited[roomNum] = true;
        for(auto nextRoom : path[roomNum]){
            if(ans[nextRoom] == -1){
                ans[nextRoom] = roomNum;
                que.push(nextRoom);
            }
        }
    }

    cout << YES << endl;
    for(int i = 1; i < n; i++){
        cout << ans[i] + 1 << endl;
    }
    return 0;
}
