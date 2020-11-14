#include <bits/stdc++.h>
#include <atcoder/segtree>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
using namespace std;
using namespace atcoder;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

const int MAX_A = 3e5 + 5;

int op(int a, int b){
    return max(a, b);
}
int e(){
    return 0;
}

int main(){
    ll n, k;
    cin >> n >> k;

    segtree<int, op, e> segtree(MAX_A);
    rep(i, n){
        int x;
        cin >> x;
        int l = x - k, r = x + k + 1;
        l = max(l, 0); r = min(r, MAX_A);
        int present = segtree.prod(l, r) + 1;
        segtree.set(x, present);
    }

    int ans = segtree.prod(0, MAX_A);
    coa;
}
