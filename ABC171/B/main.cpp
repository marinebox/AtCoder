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
    int k, n;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, n){
        cin >> p[i];
    }

    // for(auto x:p) cout << x << endl;
    sort(p.begin(), p.end());

    int ans = 0;
    for(int i = 0; i < k; i++){
        ans += p[i];
        // cout << p[i] << endl;
    }

    cout << ans << endl;
    return 0;
}
