#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;


int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &t:a) cin >> t;

    int alice = 0, bob = 0;
    sort(a.rbegin(), a.rend());
    for(int i = 0; i < a.size(); i++){
        if(i % 2 == 0) alice += a[i];
        else bob += a[i];
    }

    auto ans = alice - bob;
    cout << ans << endl;
    return 0;
}
