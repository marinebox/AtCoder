#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    double sh, lg;
    sh = 30.0 * (n % 12) + 0.5 * m;
    lg = 6.0 * m;

    // cout << sh << endl;
    // cout << lg << endl;
    double ans;
    ans = min(abs(sh - lg), 360 - abs(lg - sh));

    cout << ans << endl;
    return 0;
}