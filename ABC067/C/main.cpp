#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl
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
    ll n; cin >> n;
    vll a(n);
    vll t(n, 0);
    for(ll i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        if(i == 0) t[0] = tmp;
        else{
            t[i] = t[i - 1] + tmp;
        }
    }

    ll accum = t.back();
    ll ans = 1e10;
    for(int i = 0; i < n - 1; i++){
        auto x = t[i];
        ll ar = accum - x;
        // cout << ar << endl;
        ll tmp = abs(x - ar);
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}
