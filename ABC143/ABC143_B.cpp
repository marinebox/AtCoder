#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> d(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> d[tsumugi];
    }

    long long ans = 0;
    for (int karen = 0; karen < n - 1; karen++){
        for (int kaede = karen + 1; kaede < n; kaede++){
            ans += d[karen] * d[kaede];
        }
    }

    cout << ans << endl;
    return 0;
}