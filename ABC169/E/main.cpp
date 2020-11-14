#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

long long median(vector<long long> &a){
    // sort(a.begin(), a.end());
    long long size = a.size();
    long long ret;
    if(size % 2 == 0){
        ret = a[size / 2 - 1] + a[size / 2];
    }
    else{
        ret = a[(size + 1) / 2 - 1] * 2;
    }
    // cout << ret << endl;
    return ret;
}

int main(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> ab(n);
    vector<ll> minmed(n), maxmed(n);
    rep(i, n){
        ll a, b;
        cin >> a >> b;
        ab[i] = make_pair(a, b);
        minmed[i] = a;
        maxmed[i] = b;
    }

    sort(minmed.begin(), minmed.end());
    sort(maxmed.begin(), maxmed.end());
    ll mimed, mamed;
    mimed = median(minmed);
    mamed = median(maxmed);

    // cout << mimed << endl;
    // cout << mamed << endl;

    long long ans = 0;
    if(n % 2 == 0){
        ans = mamed - mimed + 1;
    }
    else{
        ans = (mamed - mimed) / 2 + 1;
    }
    cout << ans << endl;
    return 0;
}