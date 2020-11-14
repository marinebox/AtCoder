#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long long a, b, c, k;
    cin >> a >> b >> c >> k;


    long long ans = 0;
    if(k <= a){
        ans = k;
    }
    else if(k <= a + b){
        ans = a;
    }
    else if(k > a + b){
        ans = a;
        long long dif = k - a - b;
        ans -= dif;
    }

    cout << ans << endl;
    return 0;
}   