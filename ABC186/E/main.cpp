#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

#include <atcoder/math>
using namespace atcoder;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        ll n, s, k;
        cin >> n >> s >> k;
        // ll ans = 0;

        auto d = gcd(n, gcd(s, k));
        n /= d;
        s /= d;
        k /= d;

        if(gcd(k, n) != 1){
            // ans = -1;
            cout << -1 << endl;
            continue;
        }

        auto ans = inv_mod(k, n) * (n - s) % n;
        cout << ans << endl;
    }

    return 0;
}
