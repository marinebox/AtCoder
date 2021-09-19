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

const string YES = "Yes";
const string NO = "No";

int main(){
    ll n; cin >> n;
    vector<int> a(n), b(n);
    ll dots = 0;
    for(auto &ca : a) cin >> ca;
    for(auto &cb : b) cin >> cb;
    for(int i = 0; i < n; i++){
        dots += a[i] * b[i];
    }
    // cout << dots << endl;
    string ans = NO;
    if(dots == 0) ans = YES;
    
    cout << ans << endl;
    return 0;
}
