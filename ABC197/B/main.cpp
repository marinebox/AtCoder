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
using dint  = deque<int>;


int main(){
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--;y--;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    int ans = 0;
    for(int i = x; i >= 0; i--){
        if(s[i][y] == '.') ans++;
        else break;
    }
    ans--;
    for(int i = x; i < h; i++){
        if(s[i][y] == '.') ans++;
        else break;
    }
    ans--;
    for(int j = y; j >= 0; j--){
        if(s[x][j] == '.') ans++;
        else break;
    }
    ans--;
    for(int j = y; j < w; j++){
        if(s[x][j] == '.') ans++;
        else break;
    }
    cout << ans << endl;
    return 0;
}
