#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <float> a(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }

    double ans = 0;
    double tmp = 0;

    for (int matsuri = 0; matsuri < n; matsuri++){
        tmp += 1 / a[matsuri];
        // cout << tmp << endl;
    }
    ans = 1 / tmp;
    cout << ans << endl;
    return 0;
}