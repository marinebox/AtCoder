#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    unordered_map<ll, ll> l, r;
    for(int i = 0; i < n; i++){
        ll tmpl, tmpr;
        tmpl = i - a[i];
        tmpr = i + a[i];
        l[tmpl]++;
        r[tmpr]++;
    }

    ll ans = 0;
    for(auto x : l){
        ans += x.second * r[x.first];
    }

    cout << ans << endl;
    return 0;
}