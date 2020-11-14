#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define coa cout << ans << endl; return 0;
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;


int main(){
    int n;
    ll x;
    cin >> n >> x;
    vec<int> a(n);
    rep(i, n) cin >> a[i];

    sort(a.begin(), a.end());

    ll ans = 0;
    ll snack = 0;
    for(auto s : a){
        snack += s;
        if(snack < x) ans++;
    }

    coa;
}
