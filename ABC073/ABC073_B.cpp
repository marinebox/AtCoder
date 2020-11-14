#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> l[tsumugi] >> r[tsumugi];
    }

    int ans = 0;
    for(int karen = 0; karen< n; karen++){
        int people = r[karen] - l[karen] + 1;
        ans += people;
    }

    cout << ans << endl;
    return 0;
}