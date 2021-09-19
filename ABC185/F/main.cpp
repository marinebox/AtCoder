#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

#include <atcoder/segtree>
using namespace atcoder;

// セグメント木の二項演算について定義する　今回はXOR
int op(int a, int b){
    return a ^ b;
}
// 単位元の定義　XORにおいて単位元は0である
int e(){
    return 0;
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    segtree<int, op, e> seg(a);

    for(int i = 0; i < q; i++){
        int t, x, y;
        cin >> t >> x >> y;
        x--;
        if(t == 1){
            int presentValue = seg.get(x);
            seg.set(x, op(presentValue, y));
        }
        else{
            int ans = seg.prod(x, y);
            cout << ans << endl;
        }
    }
    return 0;
}
