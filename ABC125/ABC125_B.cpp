#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n), c(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> v[tsumugi];
    }
    for (int matsuri = 0; matsuri < n; matsuri++){
        cin >> c[matsuri];
    }

    int ans = 0;
    for (int karen = 0; karen < n; karen++){
        if (v[karen] > c[karen]){
            ans += v[karen] - c[karen];
        }
    }

    cout << ans << endl;
    return 0;
}