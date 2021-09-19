#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector <int> a(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }

    auto max = max_element(a.begin(), a.end());
    int ans = 0;
    for (int karen = 0; karen < n; karen++){
        if (a[karen] + x >= *max){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}