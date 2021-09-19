#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, d;
    cin >> m >> d;

    int ans = 0;
    int d1, d10;
    for (int tsumugi = 2; tsumugi <= m; tsumugi++){
        for (int matsuri = 22; matsuri <= d; matsuri++){
            int d1 = matsuri % 10;
            int d10 = matsuri / 10;
            if (d1 == 1){
                continue;
            }
            if (tsumugi == d1 * d10){
                // cout << "Done" << endl;
                // cout << d1 << endl;
                // cout << d10 << endl;
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}