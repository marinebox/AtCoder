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

class modll{
    long long x;
    modll pow(long long t){
        if(!t) return 1;
        modll a = pow(t >> 1);
        a.multiplication(a.x);
        if(t & 1) a.multiplication(this->x);
        return a;
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
    void subtraction(long long y){
        this->addition(-y);
    }
    void multiplication(long long y){
        long long tmp = this->x;
        tmp *= y;
        tmp = ((tmp % MOD + MOD) % MOD);
        this->x = tmp;
    }
    long long inv(){
        return pow(MOD - 2).getX();
    }
    void division(long long y){
        long long tmp = this->x;
        long long yinv = modll(y).inv();
        tmp *= yinv;
        this->multiplication(tmp);
    }
};

int n, k;
vll a(n);
int numOfNegative = 0;
ll positiveMIN = 1e9;
modll ans = 0;

modll modeNegative(){
    modll ans = 0;

}

modll modePositive(){
    modll ans = 1;
    while(k){
        ans.multiplication()
    }
}

int main(){
    cin >> n >> k;
    rep(i, n){
        ll tp;
        cin >> tp;
        if(tp < 0) numOfNegative++;
        if(tp > 0) positiveMIN = min(positiveMIN, tp);
        a[i] = tp;
    }
    bool isNegativeMax = false;
    if(k % 2 == 1 && numOfNegative == 0){
        isNegativeMax = true;
    }
    sort(a.begin(), a.end());
    
    if(isNegativeMax){
        ans = modeNegative();
    }
    else{
        ans = modePositive();
    }
}
