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
    int n; cin >> n;
    vec<int> a(n); cinvec(a);

    int ans = 1e9;
    for(int i = -100; i <= 100; i++){
        int tmp = 0;
        for(auto x : a){
            tmp += pow(x - i, 2);
        }
        ans = min(ans, tmp);
    }

    coa;
}
