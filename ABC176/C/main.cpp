#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;


int main(){
    int n;
    cin >> n;
    vll a(n);
    rep(i, n){
        cin >> a[i];
    }

    auto previous = a[0];
    ll ans = 0;
    // vector<long long> step(n, 0);
    for(ll i = 1; i < n; i++){
        auto present = a[i];
        ll step = 0;
        if(present < previous){
            // step[i] = previous - present;
            step = previous - present;
            // ans += previous - present;
            ans += step;
        }
        a[i] += step;
        previous = a[i];
        // cout << step << endl;
    }

    cout << ans << endl;
    return 0;
}
