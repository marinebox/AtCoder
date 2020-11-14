#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += i;
    }
    cout << ans << endl;
    return 0;
}