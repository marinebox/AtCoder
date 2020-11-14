#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> d(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> d[tsumugi];
    }

    //中央値を返せばよい
    sort(d.begin(), d.end());
    int lower = d[n / 2 - 1];
    int upper = d[n / 2];
    int ans = upper - lower;

    cout << ans << endl;
    return 0;
}