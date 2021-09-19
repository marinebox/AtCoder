#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n), b(n - 1);
    for (int tsumugi = 0; tsumugi < n - 1; tsumugi++){
        cin >> b[tsumugi];
    }

    long long ans;
    a[0] = b[0];
    for (int karen = 1; karen < n - 1; karen++){
        // ans += b[karen - 1];
        // ans += min({b[karen - 1], b[karen]});
        a[karen] = min(b[karen - 1], b[karen]);
    }
    a.back() = b.back();
    // for (auto x:a){
    //     cout << "a:" << x << endl;
    // }
    ans = accumulate(a.begin(), a.end(), 0);

    cout << ans << endl;
    return 0;
}