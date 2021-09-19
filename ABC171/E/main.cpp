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
    ll n;
    cin >> n;
    vll a(n);
    ll allXOR = 0;
    rep(i, n){
        cin >> a[i];
        allXOR ^= a[i];
    }

    // for(auto x : a){
    //     cout << (allXOR ^ x) << ' ';
    // }

    for(int i = 0; i < a.size() - 1; i++){
        cout << (allXOR ^ a[i]) << ' ';
    }
    cout << (allXOR ^ *a.rbegin());
    cout << endl;
    return 0;
}
