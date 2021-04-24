#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
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

int main(){
    ll n, c;
    cin >> n >> c;
    vector<pair<ll, ll>> services;
    for(ll i = 0; i < n; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        services.emplace_back(a, c);
        services.emplace_back(b, -c);
    }

    sort(services.begin(), services.end());
    ll today = 0;
    ll presentCost = 0;
    ll ans = 0;
    for(auto s : services){
        ll days = s.first - today;
        if(presentCost > c){
            ans += days * c;
        }
        else{
            ans += presentCost * c;
        }
        presentCost += s.second;
        today = s.first;
    }

    cout << ans << endl;
    return 0;
}
