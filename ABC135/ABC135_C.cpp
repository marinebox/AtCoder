#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <long long> a(n + 1), b(n);
    for (int tsumugi = 0; tsumugi < n + 1; tsumugi++){
        cin >> a[tsumugi];
    }
    for (int matsuri = 0; matsuri < n; matsuri++){
        cin >> b[matsuri];
    }

    long long ans = 0;

    //i番目の街について考える
    for (int kaori = 0; kaori < n; kaori++){
        ans += min(a[kaori], b[kaori]);
        if (b[kaori] > a[kaori]){
            b[kaori] -= a[kaori];
            ans += min(a[kaori + 1], b[kaori]);
            if (a[kaori + 1] > b[kaori]){
                a[kaori + 1] -= b[kaori];
            }
            else{
                a[kaori + 1] = 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}