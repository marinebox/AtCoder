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

// map<long long, int> primeFactorization(long long n){
//     map<long long, int> ret;
//     for(long long i = 2; i * i <= n; i++){
//         while(n % i == 0){
//         ret[i]++;
//         n /= i;
//         }
//     }
//     if(n != 1) ret[n] = 1;
//     return ret;
// }

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    // for(ll i = 1; i <= n; i++){
    //     auto primes = primeFactorization(i);
    //     ll divs = 1;
    //     for(auto p:primes){
    //         divs *= (p.second + 1);
    //     }
    //     ans += i * divs;
    // }
    vector<ll> divs(1e7 + 100,2);
    divs[1] = 1;

    for(ll i = 2; i <= n / 2 + 1; i++){
        auto tmp = i;
        while(tmp <= n){
            divs[tmp]++;
            tmp += tmp;
        }
    }

    rep(i, n){
        cout << divs[i];
        ans += i * divs[i];
    }
    cout << ans << endl;
    return 0;
}
