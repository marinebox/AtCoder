#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for(int tsumugi = 0; tsumugi < m; tsumugi++){
        cin >> a[tsumugi] >> b[tsumugi];
    }

    vector<vector<int>> gameResult(n, vector<int>(n, -1));
    // win is 1, lose is 0, no game is -1.
    for(int karen = 0; karen < m; karen++){
        int win, lose;
        win = a[karen] - 1;
        lose = b[karen] - 1;
        gameResult[win][lose] = 1;
        gameResult[lose][win] = 0;
    }

    for(int matsuri = 0; matsuri < n; matsuri++){
        for(int yukiho = 0; yukiho < n; yukiho++){
            int tmp = gameResult[matsuri][yukiho];
            if(tmp == 0){
                cout << 'x';
            }
            else if(tmp == 1){
                cout << 'o';
            }
            else{
                cout << '-';
            }
            // cout << " ";
            if(yukiho != n - 1){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}