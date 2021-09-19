// Prison
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    // vector <int> l(m);
    // vector <int> r(m);

    int tmpl, tmpr;
    int ansl = 0, ansr = n;
    for (int tsumugi = 0; tsumugi < m; tsumugi++){
        cin >> tmpl >> tmpr;
        ansl = max(tmpl, ansl);
        ansr = min(tmpr, ansr);
    }
    int ans = ansr - ansl + 1;
    if (ans < 0){
        ans = 0;
    }

    cout << ans << endl;
    return 0;
}