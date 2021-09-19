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

const long long MOD = 1000000007;

long long rapidPow(long long x, long long n, long long mod){
    //x ^ nを高速で求める
    //適宜modを取る
    long long ans = 1;
    while(n > 0){
        if(n & 1){
            ans = ans * x;
            if(ans >= mod){
                ans %= mod;
            }
        }
        x *= x;
        if(x >= mod){
            x %= mod;
        }
        n >>= 1;
    }
    return ans;
}

int main(){
    ll n ;
    cin >> n;

    ll ans = 0;

    ll t1 = rapidPow(10, n, MOD);
    ll t2 = rapidPow(9, n, MOD);
    ll t3 = rapidPow(8, n, MOD);
    ans = t1 - 2 * t2 + t3;
    while(ans < 0){
        ans += MOD;
    }
    cout << ans << endl;
    return 0;
}