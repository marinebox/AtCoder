#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(a < b){
        swap(a, b);
    }
    long long r = a % b;
    while(r){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(){
    long long k;
    cin >> k;

    long long ans = 0;
    for(long long h = 1; h <= k; h++){
        for(long long i = 1; i <= k; i++){
            long long tmp = gcd(h, i);
            for(long long j = 1; j <= k; j++){
                ans += gcd(tmp, j);
            }
        }
    }

    cout << ans << endl;
    return 0;
}