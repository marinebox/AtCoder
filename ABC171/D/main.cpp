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


int main(){
    vector<ll> numbers(1e5 + 5, 0);
    int n;
    cin >> n;
    ll ans = 0;
    rep(i, n){
        int tmp;
        cin >> tmp;
        numbers[tmp]++;
        ans += tmp;
    }
    int q;
    cin >> q;
    rep(i, q){
        int b, c;
        cin >> b >> c;
        numbers[c] += numbers[b];
        ans += (c - b) * numbers[b];
        numbers[b] = 0;
        cout << ans << endl;
    }

    return 0;
}
