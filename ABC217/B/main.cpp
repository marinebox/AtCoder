#include <bits/stdc++.h>
// #include <atcoder/all.hpp>
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
    vector<pair<string, bool>> names = {{"ABC", 0}, {"ARC", 0}, {"AGC", 0}, {"AHC", 0}};
    for(int i = 0; i < 3; i++){
        string s; cin >> s;
        for(auto &p:names){
            if(s == p.first) p.second = true;
        }
    }

    for(auto n:names){
        if(!n.second){
            cout << n.first << endl;
            break;
        }
    }
    return 0;
}
