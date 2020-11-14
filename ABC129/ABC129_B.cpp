// Balance
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> w(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> w[tsumugi];
    }

    int left = 0;
    int right = accumulate(w.begin(), w.end(), 0);
    int ans = 1e5;
    int tmp;
    // int now = 0;
    for (int matsuri = 0; matsuri < n; matsuri++){
        // left += w[now];
        // right -= w[now];
        left += w[matsuri];
        right -= w[matsuri];
        tmp = abs(left - right);
        // cout << "tmp:" << tmp << endl;
        ans = min(ans, tmp);
        // now++;
    }

    cout << ans << endl;
    return 0;
}