#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
using namespace std;
// using namespace atcoder;
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

int main(){
    int n; cin >> n;
    int x,  y; cin >> x >> y;
    vector<pair<int, int>> lunch(n);
    for(auto &l:lunch){
        int a, b; cin >> a >> b;
        l = make_pair(a, b);
    }

    vector<vector<vector<int>>> dp(n + 5, vector<vector<int>>(x + 5, vector<int>(y + 5, 1e5)));
    dp[0][0][0] = 0;

    // dp
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x + 5; j++){
            for(int k = 0; k < y + 5; k++){
                // 買うとしたらたこ焼き、たい焼きの累計はいくつにできるか？
                int nx = min(x, j + lunch[i].first);
                int ny = min(y, k + lunch[i].second);
                dp[i + 1][j][k] = min(dp[i][j][k], dp[i + 1][j][k]); //買わない場合
                dp[i + 1][nx][ny] = min(dp[i + 1][nx][ny], dp[i][j][k] + 1); //買う場合
            }
        }
    }
    cout << (dp[n][x][y] > 1e4 ? -1 : dp[n][x][y]) << endl;
    return 0;
}
