#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

map< long long, int > prime_factor(long long n) {
    map< long long, int > ret;
    for(long long i = 2; i * i <= n; i++) {
        while(n % i == 0) {
        ret[i]++;
        n /= i;
        }
    }
    if(n != 1) ret[n] = 1;
    return ret;
}

long long count(long long p){
    long long ret = 0;
    ll tp = p;
    for(long long i = 1; i <= p; i++){
        tp -= i;
        if(tp < 0) break;
        ret += 1;
    }
    return ret;
}

int main(){
    ll n;
    cin >> n;
    map<ll, int> factor = prime_factor(n);


    ll ans = 0;
    for(auto p : factor){
        // cout << p.second << endl;
        ans += count(p.second);
    }

    cout << ans << endl;
    return 0;
}
