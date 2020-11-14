#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

const long long MOD = 998244353;

int main(){
    ll a, b, c;
    cin >> a >> b >> c;

    ll a1 = a * (a + 1) / 2;
    a1 %= MOD;
    ll b1 = b * (b + 1) / 2;
    b1 %= MOD;
    ll c1 = c * (c + 1) / 2;
    c1 %= MOD;
    ll ans = a1 * b1 % MOD;
    ans *= c1;
    ans %= MOD;

    cout << ans << endl;
    return 0;
}
