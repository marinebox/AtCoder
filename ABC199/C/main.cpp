#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
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
    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;
    bool is_reverse = false;
    for(int i = 0; i < q; i++){
        int t, a, b;
        cin >> t >> a >> b;
        a--;b--;
        if(t == 1){
            if(is_reverse){
                if(a < n) a += n;
                else a -= n;
                if(b < n) b += n;
                else b -= n;
            }
            swap(s[a], s[b]);
        }
        else{
            is_reverse = !is_reverse;
        }
    }

    cout << (is_reverse ? s.substr(n) + s.substr(0, n) : s) << endl;
    return 0;
}
