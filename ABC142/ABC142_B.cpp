#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> h(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> h[tsumugi];
    }

    int ans = 0;
    for (int karen = 0; karen < n; karen++){
        if (h[karen] >= k){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}