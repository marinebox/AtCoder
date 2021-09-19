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
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &m : a) cin >> m;

    int ans = 0;
    for(int l = 0; l < n; l++){
        int tans = 0;
        int mm = a[l];
        tans += a[l];
        for(int r = l; r < n; r++){
            mm = min(mm, a[r]);
            tans = max(tans, mm * (r - l + 1));
        }
        ans = max(ans, tans);
    }
    cout << ans << endl;
    return 0;
}