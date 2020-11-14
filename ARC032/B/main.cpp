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

struct UnionFind{
    vector<int> parent;
    // parent[i] = jのとき、iの親はj
    // 負の値のとき根であり、その絶対値はは木の要素数
    UnionFind(int N) : parent(N, -1){
        // 初期化
    }
    int root(int x){
    if(parent[x] < 0) return x;
    return parent[x] = root(parent[x]);
    }
    void unite(int x, int y){
        // xとyの木を結合
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        if(size(x) > size(y)){
            // 小さい方の木を大きい方につなげる
            // サイズは負の値で管理している
            parent[rx] += parent[ry];
            parent[ry] = rx;
        }
        else{
            parent[ry] += parent[rx];
            parent[rx] = ry;
        }
        return;
    }
    bool isSame(int x, int y){
        // 同じ木に所属するか?
        return root(x) == root(y);
    }
    int size(int x){
        int rx = root(x);
        return -parent[rx];
    }
};

int main(){
    int n, m;
    cin >> n >> m;

    UnionFind uf(n);

    rep(i, m){
        int a, b;
        cin >> a >> b;
        uf.unite(a, b);
    }

    int ans = -1;
    for(auto x : uf.parent){
        if(x < 0) ans++;
    }

    cout << ans << endl;
    return 0;
}
