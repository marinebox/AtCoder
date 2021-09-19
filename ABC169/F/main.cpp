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

const long long MOD = 998244353;

class modll{
    long long x;
    modll pow_(long long t){
        if(!t) return 1;
        modll a = pow_(t >> 1);
        a.multiplication(a.x);
        if(t & 1) a.multiplication(this->x);
        return a;
    }
    long long inv(){
        return pow_(MOD - 2).getX();
    }
public:
    modll(long long y = 0){
        y = ((y % MOD + MOD) % MOD);
        this->x = y;
    }
    long long getX(){
        return this->x;
    }
    void addition(long long y){
        long long tmp = this->x;
        tmp += y;
        if(tmp > MOD){
            tmp %= MOD;
        }
        if(tmp < 0){
            tmp = ((tmp % MOD + MOD) % MOD);
        }
        this->x = tmp;
    }
    void addition(modll y){
        this->addition(y.getX());
    }
    void subtraction(long long y){
        this->addition(-y);
    }
    void subtraction(modll y){
        this->addition(-y.getX());
    }
    void multiplication(long long y){
        long long tmp = this->x;
        tmp *= y;
        tmp = ((tmp % MOD + MOD) % MOD);
        this->x = tmp;
    }
    void multiplication(modll y){
        this->multiplication(y.getX());
    }
    void division(long long y){
        long long tmp = this->x;
        long long yinv = modll(y).inv();
        tmp *= yinv;
        this->multiplication(tmp);
    }
};

int main(){
    int n, s;
    cin >> n >> s;
    vint a(n);
    rep(i, n){
        cin >> a[i];
    }

    // vvint dp(n + 1, vector<modll>(s + 5, modll(0)));
    vector<vector<modll>> dp(n + 1, vector<modll>(s + 5, modll(0)));
    for(int i = 1; i <= n; i++){
        auto x = a[i - 1];
        dp[i][x].addition(1);
    }
}
