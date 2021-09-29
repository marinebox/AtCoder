#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
using namespace std;
// using namespace atcoder;
using ll = __int64_t;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;
using dint  = deque<int>;
using Graph = vector<vector<int>>;


int main(){
    int n; cin >> n;
    int t, a; cin >> t >> a;
    vector<int> h(n);
    for(auto &t:h) cin >> t;

    vector<double> temperature(n);
    for(int i = 0; i < n; i++){
        double tp = t - h[i] * 0.006;
        temperature[i] = tp;
    }

    vector<double> diff;
    for(auto &tp:temperature){
        double d = fabs(tp - a);
        diff.emplace_back(d);
    }

    auto iter = min_element(diff.begin(), diff.end());
    int ans = distance(diff.begin(), iter);
    ans++;

    cout << ans << endl;
    return 0;
}
