#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ships(n + 1);
    // vector<int> ships(n);
    for(int tsumugi = 0; tsumugi < m; tsumugi++){
        int ta, tb;
        cin >> ta >> tb;
        ships[ta].push_back(tb);
        ships[tb].push_back(ta);
    }

    //Nから戻っていく
    for(int karen = 0; karen < ships[n].size(); karen++){
        int relay = ships[n][karen];
        for(int matsuri = 0; matsuri < ships[relay].size(); matsuri++){
            if(ships[relay][matsuri] == 1){
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}