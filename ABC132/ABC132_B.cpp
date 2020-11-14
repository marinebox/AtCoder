#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> p(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> p[tsumugi];
    }

    int ans = 0;
    for (int matsuri = 1; matsuri < n - 1; matsuri++){
        if (p[matsuri] != max({p[matsuri - 1], p[matsuri], p[matsuri + 1]}) and 
            p[matsuri] != min({p[matsuri - 1], p[matsuri], p[matsuri + 1]})){
            ans++;
            }
    }

    cout << ans << endl;
    return 0;
}