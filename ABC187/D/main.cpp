#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using namespace atcoder;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;


int main(){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    ll dif = -accumulate(a.begin(), a.end(), 0LL);

    vector<ll> tak;
    for(ll i = 0; i < n; i++){
        tak.emplace_back(a[i] * 2 + b[i]);
    }
    sort(tak.rbegin(), tak.rend());

    ll ans = 0;
    for(auto iter = tak.begin(); iter != tak.end(); iter++){
        if(dif > 0) break;
        ans++;
        dif += *iter;
    }

    cout << ans << endl;
    return 0;
}
