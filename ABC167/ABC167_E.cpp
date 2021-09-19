#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const long long MOD = 998244353;
const long long MAX_RANGE = 2e5 + 5;
vector<long long> factorials(MAX_RANGE), inverses(MAX_RANGE), factorialsOfInvers(MAX_RANGE);

void vectorsInit(){
    factorials[0] = factorials[1] = 1;
    factorialsOfInvers[0] = factorialsOfInvers[1] = 1;
    // 0! = 1! = 1
    inverses[1] = 1;
    // 0 is undefined.
    for(long long i = 2; i < MAX_RANGE; i++){
        factorials[i] = factorials[i - 1] * i % MOD;
        inverses[i] = MOD - inverses[MOD % i] * (MOD / i) % MOD;
        factorialsOfInvers[i] = factorialsOfInvers[i - 1] * inverses[i] % MOD;
    }
}

long long combination(long long n, long long r){
    // nCr
    return factorials[n] * (factorialsOfInvers[n - r] * factorialsOfInvers[r] % MOD) % MOD;
}

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


int main(){
    long long n, m, k;
    cin >> n >> m >> k;

    long long ans = 0;
    vectorsInit();
    // ans = combination(5,2);
    for(long long x = n - 1; x >= 0; x--){
        long long tmp = m;
        now 
    }

    cout << ans << endl;
    return 0;
}