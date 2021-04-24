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

const int MAX_N = 2e5 + 5;
const double eps = 1e-3;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<bool> restart(MAX_N, false);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        restart[a] = true;
    }

}
