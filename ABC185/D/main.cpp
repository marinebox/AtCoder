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
    ll n, m; cin >> n >> m;
    ll ans = 0;
    if(m == 0){
        ans = 1;
    }
    else{
        vector<ll> blue(m, 0);
        for(auto &b : blue) cin >> b;
        blue.emplace_back(n + 1);
        vector<ll> whiteList;
        sort(blue.begin(), blue.end());
        ll k = 1e9;
        ll left = 0;
        for(auto b : blue){
            ll whiteRange = b - left - 1;
            // cout << "left: " << left << endl;
            // cout << "b: " << b << endl;
            // cout << "white: " << whiteRange << endl;
            if(whiteRange == 0){
                left = b;
                continue;
            }
            whiteList.emplace_back(whiteRange);
            k = min(k, whiteRange);
            left = b;
            // cout << "k: " << k << endl;
        }
        // ll ans = 0;
        for(auto w : whiteList){
            // ans += ceil((float)w / (float) k);
            ans += w / k;
            if(w % k != 0) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
