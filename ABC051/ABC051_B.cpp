#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int k, s;
    cin >> k >> s;

    // int x, y, z;
    long long ans = 0;
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
            int tpz = s - i - j;
            if(tpz >= 0 && tpz <= k){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}