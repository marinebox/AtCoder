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
using Graph = vector<vector<int>>;

map<char, int> AlphabetCost;

struct StringCost{
    string s;
    vector<int> costs;
};

bool StringCostLess(const StringCost& a, StringCost& b){
    return a.costs < b.costs;
}

int main(){
    string x; cin >> x;
    int n; cin >> n;
    vector<string> s(n);
    for(auto &c:s) cin >> c;

    for(int i = 0; i < int(x.size()); i++) AlphabetCost[x[i]] = i;

    vector<StringCost> sc(n);
    for(int i = 0; i < n; i++){
        string ts = s[i];
        vector<int> tsCost(11, -1);
        for(int j = 0; j < int(ts.size()); j++){
            char c = ts[j];
            tsCost[j] = AlphabetCost[c];
        }
        sc[i] = StringCost{ts, tsCost};
    }

    sort(sc.begin(), sc.end(), StringCostLess);

    for(auto ans:sc){
        cout << ans.s << endl;
        // for(auto i:ans.costs){
        //     cout << i << ' ';
        // }
        // cout << endl;
    }

    return 0;
}