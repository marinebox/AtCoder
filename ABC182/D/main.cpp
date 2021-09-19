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

struct moves{
    ll maxPosition;
    ll movedPosition;
};

int main(){
    ll n;
    cin >> n;
    vec<ll> a(n);

    vector<moves> m(n);
    cin >> a[0];
    m[0].maxPosition = max(0LL, a[0]);
    m[0].movedPosition = a[0];
    // cout << "m0: " << m[0].movedPosition << endl;

    for(auto iter = a.begin() + 1; iter != a.end(); iter++){
        ll i = distance(a.begin(), iter);
        cin >> *iter;
        m[i].movedPosition = m[i - 1].movedPosition + *iter;
        m[i].maxPosition = max(m[i - 1].maxPosition, m[i].movedPosition);
    }

    ll presentPostion = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, presentPostion + m[i].maxPosition);
        presentPostion += m[i].movedPosition;
        // cout << "Now: " << presentPostion << endl;
    }

    cout << ans << endl;
    return 0;

    // m[0] = {0, 0};
    // cin >> a[0];
    // m[0].movedPosition = a[0];
    // m[0].maxPosition = max(0LL, a[0]);
    // for(auto iter = a.begin() + 1; iter != a.end(); iter++){
    //     ll i = distance(a.begin(), iter);
    //     cin >> *iter;
    //     m[i].maxPosition = m[i - 1].maxPosition + *iter;
    //     m[i].movedPosition = max(m[i - 1].maxPosition, m[i].movedPosition);
    // }

    // ll presentPosition = 0;
    // ll ans = 0;
    // for(int i = 0; i < n; i++){
    //     ans = max(ans, presentPosition + m[i].maxPosition);
    //     presentPosition += m[i].movedPosition;
    // }
    
    // cout << ans << endl;
    // return 0;
}
