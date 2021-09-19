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


int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end(), greater<ll>());
    ll accum = accumulate(a.begin(), a.end(), 0LL);
    ll size = n;
    size--;

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll left = a[i];
        accum -= left;
        ll tmp = left * size;
        // cout << tmp << " : " << accum << endl;
        ans += (tmp - accum);
        size--;
    }

    cout << ans << endl;
    return 0;
}
