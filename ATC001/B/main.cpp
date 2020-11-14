#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;

const string YES = "Yes";
const string NO = "No";

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
    int n, q;
    cin >> n >> q;

    UnionFind uf(n);

    rep(i, q){
        int p, a, b;
        cin >> p >> a >> b;
        if(!p) uf.unite(a, b);
        else{
            string ans = uf.isSame(a, b) ? YES : NO;
            cout << ans << endl;
        }
    }

    return 0;
}
