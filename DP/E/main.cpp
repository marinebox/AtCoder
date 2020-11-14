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
    int n;
    ll w;
    cin >> n >> w;
    vector<pair<long long, int>> things(n);
    rep(i, n){
        ll w, v;
        cin >> w >> v;
        things[i] = make_pair(w, v);
    }

    int maxValue = 1e3 * n;

    int ans = 0;
    vvll dp(n + 1, vll(maxValue + 5, 1e9 + 5));
    dp[0][0] = 0;
    // i個までの荷物を考えたとき価値jを実現できる最小の重量を考える
    for(int i = 1; i <= n; i++){
        ll weight, value;
        weight = things[i-1].first;
        value = things[i-1].second;
        for(int j = 0; j < maxValue + 5; j++){
            if(j < value){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                ll t1, t2;
                t1 = dp[i - 1][j - value] + weight;
                t2 = dp[i - 1][j];
                dp[i][j] = min(t1, t2);
            }
            if(dp[i][j] <= w and dp[i][j] != 0) ans = max(ans, j);
        }
    }

    cout << ans << endl;
    return 0;
}
