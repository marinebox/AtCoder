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
    int n, x;
    cin >> n >> x;

    x *= 100;

    int alc = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int v, p;
        cin >> v >> p;
        alc += v * p;
        ans++;
        if(alc > x) break;
    }

    if(alc <= x) ans = -1;

    cout << ans << endl;
    return 0;
}
