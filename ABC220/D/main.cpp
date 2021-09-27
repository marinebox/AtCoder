#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
using namespace std;
using namespace atcoder;
using ll = __int64_t;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;
using dint  = deque<int>;
using Graph = vector<vector<int>>;

const long long MOD = 998244353;
using mint = modint998244353;

int main(){
    int n; cin >> n;
    vector<int> a(n + 5);
    // 1オリジンにする
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<vector<mint>> dp(n + 3, vector<mint>(13, 0));
    dp[1][a[1]] = 1;
    for(int i = 1; i <= n; i++){
        // i個目まで見たとき、一番左の値がjになる組み合わせはいくつ存在するか。
        for(int j = 0; j < 10; j++){
            auto prev = dp[i][j];
            int nextj1 = (j + a[i + 1]) % 10;
            int nextj2 = (j * a[i + 1]) % 10;
            dp[i + 1][nextj1] += prev;
            dp[i + 1][nextj2] += prev;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << dp[n][i].val() << endl;
    }
    return 0;
}
