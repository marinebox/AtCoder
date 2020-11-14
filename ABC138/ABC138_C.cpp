#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    vector <float> v(n);
    const float inf = 1e4;
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> v[tsumugi];
    }

    sort(v.begin(), v.end());
    
    for (int matsuri = 0; matsuri < n - 1; matsuri++){
        float min1 = v[matsuri];
        float min2 = v[matsuri + 1];
        // cout << min1 << endl;
        // cout << min2 << endl;
        v[matsuri] = inf;
        v[matsuri + 1] = (min1 + min2) / 2;
        // cout << v[matsuri] << endl;
        // cout << v[matsuri + 1] << endl;
    }
    cout << v[n - 1] << endl;
    return 0;
}