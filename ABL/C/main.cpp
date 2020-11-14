#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

class UnionFind{
    vector<int> parent;
    // UnionFind木の実装
public:
    UnionFind(int N) : parent(N, -1) {} // コンストラクタ
    int root(int x){
        // 根を求める。
        if(parent[x] < 0) return x;
        return parent[x] = root(parent[x]);
    }
    void unite(int x, int y){
        // xとyの木を結合する。
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        if(-parent[rx] > -parent[ry]){
            // 小さい方の木を大きい方につなげる。
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
        // 同じ木にあるか?
        return root(x) == root(y);
    }
    int size(int x){
        // xの木に属する要素はいくつか?
        return -parent[root(x)];
    }
    int trees(){
        // 木は全部で何本あるか?
        int tree = 0;
        for(int i = 0; i < parent.size(); i++){
            if(i == root(i)) tree++;
        }
    return tree;
    }
};

int main(){
    int n, m;
    cin >> n >> m;

    UnionFind uf(n);

    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        uf.unite(a, b);
    }

    int ans = uf.trees() - 1;
    // rep(i, n){
    //     if(i == uf.root(i)) ans++;
    // }
    
    coa;
}
