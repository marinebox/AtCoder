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

long long GCD(long long a, long long b){
    return b ? GCD(b, a % b) : a;
}
long long LCM(long long a, long long b){
    return a * b / GCD(a, b);
}

int main(){
    int n; cin >> n;
    ll ans = 1;

    ll tmp = 1;
    for(int i = 2; i <= n; i++){
        tmp = LCM(tmp, i);
    }
    // cout << tmp << endl;
    ans += tmp;

    cout << ans << endl;
    return 0;
}
