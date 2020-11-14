//Tenki
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int ans = 0;
    for (int tsumugi = 0; tsumugi < 3; tsumugi++){
        if (s[tsumugi] == t[tsumugi]){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}