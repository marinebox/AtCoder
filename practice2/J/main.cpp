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

int op(int a, int b){
    return max(a, b);
}

int e(){
    return -1;
}

int reference;
bool f(int x){
    return x < reference;
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    segtree<int, op, e> seg(a);

    for(int i = 0; i < q; i++){
        int t;
        cin >> t;
        if(t == 1){
            int x, v;
            cin >> x >> v;
            x--;
            seg.set(x, v);
        }
        else if(t == 2){
            int l, r;
            cin >> l >> r;
            l--;
            cout << seg.prod(l, r) << endl;
        }
        else if(t == 3){
            int x, v;
            cin >> x >> v;
            reference = v;
            x--;
            cout << seg.max_right<f>(x) + 1 << endl;
        }
    }
    return 0;
}
