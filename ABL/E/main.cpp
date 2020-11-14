#include <bits/stdc++.h>
#include <atcoder/all>
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

using mint = modint998244353;
const mint inv9 = mint(1) / 9;
// const long long MOD = 998244353;

struct S{
    mint x, w;
    S(mint x = 0, mint w = 1) : x(x), w(w){}
};

S op(S a, S b){
    return S(a.x * b.w + b.x, a.w * b.w);
}

S e(){
    return S();
}

S mapping(int f, S a){
    if(f == 0) return a;
    return S((a.w - 1) * inv9 * f, a.w); 
}

int composition(int f, int g){
    if(f == 0) return g;
    return f;
}

int id(){
    return 0;
}

int main(){
    int n, q;
    cin >> n >> q;
    lazy_segtree<S, op, e, int, mapping, composition, id> lt(n);
    rep(i, n) lt.set(i, S(1, 10));
    rep(i, q){
        int l, r, d;
        cin >> l >> r >> d;
        l--;
        lt.apply(l, r, d);
        S ans = lt.prod(0, n);
        cout << ans.x.val() << endl;
    }
    return 0;
}
