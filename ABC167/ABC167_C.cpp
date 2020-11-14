#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        cin >> c[i];
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    //クリアできる?
    // vector<int> allAb(m, 0);
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         allAb[j] += a[i][j];
    //     }
    // }
    // for(auto ab : allAb){
    //     if(ab < x){
    //         cout << -1 << endl;
    //         return 0;
    //     }
    // }

    //総当り
    int ref = accumulate(c.begin(), c.end(), 0) + 1;
    int ans = ref;
    for(int i = 0; i < (1 << n); i++){
        bitset<12> s(i);
        vector<int> abilities(m, 0);
        int tmp = 0;
        for(int j = 0; j < n; j++){
            if(s.test(j)){
                tmp += c[j];
                for(int k = 0; k < m; k++){
                    abilities[k] += a[j][k];
                }
            }
        }
        bool ok = true;
        for(auto ab : abilities){
            if(ab < x){
                ok = false;
            }
        }
        if(ok){
            ans = min(ans, tmp);
        }
    }

    if(ans == ref){
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}