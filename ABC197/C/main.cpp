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
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &t : a) cin >> t;
    
    // bit全探索
    int ans = 1 << 30;
    for(int i = 0; i < 1 << (n - 1); i++){
        int tor = 0;
        int txor = 0;
        for(int j = 0; j < n; j++){
            tor |= a[j];
            if(i >> j & 1){
                txor ^= tor;
                tor = 0;
            }
        }
        txor ^= tor;
        ans = min(ans, txor);
    }
    cout << ans << endl;
    return 0;
}
