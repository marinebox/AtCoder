#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;


int main(){
    int n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> things(n);
    rep(i, n){
        ll w, v;
        cin >> w >> v;
        things[i] = make_pair(w, v);
    }

    vvll dp(n + 1, vll(w + 1, 0));
    long long ans = 0;
    for(int i = 0; i < n; i++){
        ll weight = things[i].first;
        ll value = things[i].second;
        for(int j = 0; j <= w; j++){
            if(j < weight){
                dp[i + 1][j] = dp[i][j];
            }
            else{
                dp[i + 1][j] = max(dp[i][j], dp[i][j - weight] + value);
            }
            ans = max(ans, dp[i + 1][j]);
        }
    }

    cout << ans << endl;
    return 0;
}
