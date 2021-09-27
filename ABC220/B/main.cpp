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

ll ntod(int n, string k){
    ll ret = 0;
    for(auto c:k){
        ret *= n;
        ret += c - '0';
    }
    return ret;
}

int main(){
    ll k; cin >> k;
    string a, b; cin >> a >> b;
    ll da = ntod(k, a), db = ntod(k, b);
    ll ans = da * db;
    cout << ans << endl;
    return 0;
}
