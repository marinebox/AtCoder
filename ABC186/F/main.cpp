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
    int h, w, m;
    cin >> h >> w >> m;

    vector<int> hnums(h, w), wnums(w, h);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--;y--;

        hnums[x] = min(hnums[x], y);
        wnums[y] = min(wnums[y], x);
    }

    ll ans = 0;
    for(auto c : hnums) ans += c;

    for(int i = 0; i < w; i++){
        int cnt = 0;
        for(int j = 0; j < wnums[i]; j++){
            if(hnums[j] < i) cnt++;
        }
        ans += cnt;
    }

    cout << ans << endl;
}
