#include <bits/stdc++.h>
#include <quadmath.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const long long MOD = 13;

class modll{
    long long x;

public:
    modll(long long y){
        y = ((y % MOD + MOD) % MOD);
        this->x = y;
    };
    long long getX(){
        return this->x;
    };
    void add(long long y){
        long long tmp = this->x;
        tmp += y;
        if(tmp > MOD){
            tmp -= MOD;
        }
        if(tmp < 0){
            tmp += MOD;
        }
        this->x = tmp;
    };
    void multiplication(long long y){
        long long tmp = this->x;
        tmp *= y;
        tmp = ((tmp % MOD + MOD) % MOD);
        this->x = tmp;
    };
};

int main(){
    long long y = 3;
    modll test = modll(y);
    // cout << (-6 % MOD) << endl;
    rep(i, 20){
        test.multiplication(-2);
        cout << test.getX() << endl;
    }
    // cout << test.getNum() << endl;
    return 0;
}