#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i < 3; i++){
        if(s[i] == '1') ans++;
    }

    cout << ans << endl;
    return 0;
}