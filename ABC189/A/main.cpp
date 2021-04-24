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
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    string ans = "Won";
    if(c1 != c2 || c2 != c3 || c3 != c1) ans = "Lost";

    cout << ans << endl;
    return 0;
}
