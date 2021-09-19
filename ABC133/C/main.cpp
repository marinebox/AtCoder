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

const long long MOD = 2019;

struct mint{
    long long x;
    mint(long long x = 0) : x((x % MOD + MOD) % MOD){}
    mint operator-() const{
        return mint(-x);
    }
    mint& operator+=(const mint a){
        if((x += a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint& operator-=(const mint a){
        if((x += MOD - a.x) >= MOD) x-= MOD;
        return *this;
    }
    mint& operator*=(const mint a){
        (x *= a.x) %= MOD;
        return *this;
    }
    mint operator+(const mint a) const{
        return mint(*this) += a;
    }
    mint operator-(const mint a) const{
        return mint(*this) -= a;
    }
    mint operator*(const mint a) const{
        return mint(*this) *= a;
    }
    mint pow(long long t) const{
        if(!t) return 1;
        mint a = pow(t >> 1);
        a *= a;
        if(t & 1) a *= *this;
        return a;
    }

    mint inv() const{
        return pow(MOD - 2);
    }
    mint& operator/=(const mint a){
        return *this *= a.inv();
    }
    mint operator/(const mint a) const{
        return mint(*this) /= a;
    };
    void max(){
        x = MOD - 1;
    }
};
istream& operator>>(istream& is, mint& a){
    return is >> a.x;
}
ostream& operator<<(ostream& os, const mint& a){
    return os << a.x;
}

int main(){
    long long l, r;
    cin >> l >> r;

    mint ans;
    ans.max();

    for(long long tl = l; tl < r; tl++){
        for(long long tr = l + 1; tr <= r; tr++){
            mint tmp = tl * tr;
            ans.x = min(ans.x, tmp.x);
            if(ans.x == 0) break;
        }
        if(ans.x == 0) break;
    }

    cout << ans << endl;
    return 0;
}