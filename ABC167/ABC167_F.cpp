#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const long long MOD = 998244353;
// const long long MOD = 7;

long long rapidPow(long long x, long long n){
    //x ^ nを高速で求める
    //適宜modを取る
    long long ans = 1;
    while(n > 0){
        if(n & 1){
            ans = ans * x;
            if(ans >= MOD){
                ans %= MOD;
            }
            x *= x;
            if(x >= MOD){
                x %= MOD;
            }
        }
        n >>= 1;
    }
    return ans;
}

vector<long long> factorials(2,1);

void factInit(long long n){
    for(long long i = 2; i <= n; i++){
        long long ans = factorials[i - 1] * i;
        if(ans >= MOD){
            ans %= MOD;
        }
        factorials.push_back(ans);
    }
    return;
}

long long combinations(long long n, long long r){
    long long ans;
    long long t1, t2, t3;
    t1 = factorials[n];
    t2 = rapidPow(factorials[n - r], MOD - 2);
    t3 = rapidPow(factorials[r], MOD -2 );
    ans = t1 * (t2 * t3 % MOD) % MOD;
    return ans;
}

int main(){
    factInit(100);
    long long ans = combinations(5, 2);
    cout << ans << endl;
    return 0;
}