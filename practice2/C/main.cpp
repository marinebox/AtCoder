#include <bits/stdc++.h>
#include <atcoder/math>
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

using namespace atcoder;

int main(){
    ll t;
    cin >> t;
    
    rep(i, t){
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        ll ans = floor_sum(n, m, a, b);
        cout << ans << endl;
    }

    return 0;
}
