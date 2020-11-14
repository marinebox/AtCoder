#include <bits/stdc++.h>
using namespace std;

// a^(-1) mod p...つまりaの逆元を求める
// a^(p-2) mod pを求める
long long modinv(long long a, long long mod){
    long long b = mod, u = 1, v = 0;
    while(b){
        long long t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= mod;
    if(u < 0){
        u += mod;
    }
    return u;
}

//a, bの最小公倍数を返す
long long lcm(long long a, long long b){
    if(a < b){
        swap(a, b);
    }
    //互除法
    long long x = a * b;
    long long r = a % b;
    while(r){
        a = b;
        b = r;
        r = a % b;
    }
    long long ans = x / b;
    // cout << ans << endl;
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    const long long MOD = 1e9 + 7;
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }
    
    long long lc = lcm(a[0], a[1]);
    for(int i = 2; i < n; i++){
        lc = lcm(lc, a[i]);
    }
    lc %= MOD;  //LCMは大きいのであらかじめMODをとっておく
    long long ans = 0;
    //割り算のmodは逆元をかければよい   modinvで逆元を出す
    for(int j = 0; j < n; j++){
        // cout << (lc / a[j]) << endl;
        // ans += lc / a[j];
        // ans %= MOD;
        ans += lc * modinv(a[j], MOD);
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}