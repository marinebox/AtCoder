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

const long long MOD = 1000000007;

int main(){
    int s;
    cin >> s;

    vector<long long> dp(s + 1, 0);
    for(int i = 0; i < 3 && i <= s; i++){
        switch(i){
            case 0:
                dp[i] = 1;
                break;
            default:
                dp[i] = 0;
                break;
        }
    }
    
    for(int i = 3; i <= s; i++){
        dp[i] = dp[i - 3] + dp[i - 1];
        if(dp[i] >= MOD) dp[i] %= MOD;
    }

    auto ans = dp[s];
    cout << ans << endl;
    return 0;
}