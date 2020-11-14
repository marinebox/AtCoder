#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, n;
    cin >> a >> b >> n;

    double tgt = min(b, n);
    // float diff = 10.0;
    long long ans = 0;
    for(long long i = (long long)tgt; i >= 1 ; i--){
        long long tmp;
        tmp = floor(a * i / b) - a * floor(i / b);
        ans = max(ans, tmp);
        if(tmp < ans){
            break;
        }
    }   

    cout << ans << endl;
    return 0;
}