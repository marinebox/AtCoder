#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;

const long long MOD = 2019;

template<typename T>
std::map<T, T> PRIME_FACTORIZATION(T n){
    // 試し割り法による素因数分解を行います。
    std::map<T, T> ret;
    for(T i = 2; i * i <= n; i++){
        while(n % i == 0){
            ret[i]++;
            n /= i;
        }
        if(n == 1) break;
    }
    if(n != 1) ret[n] = 1;
    return ret;
}

template<typename T>
std::vector<T> ERATOSTHENES(const T n){
    // エラトステネスの篩を用いて素数の配列を求めます。
    std::vector<bool> isPrime(n + 1, true);
    std::vector<T> primes;
    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            for(int j = i + i; j <= n; j += i){
                isPrime[j] = false;
            }
            primes.emplace_back(i);
        }
    }
    return primes;
}

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
};

class mint{
    long long x;
public:
    mint(long long x = 0) : x((x % MOD + MOD) % MOD){}
    mint operator-() const{
        return mint(-x);
    }
    mint& operator+=(const mint a){
        if((x += a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint& operator-=(const mint a){
        if((x += MOD - a.x) >= MOD) x-= MOD;
        return *this;
    }
    mint& operator*=(const mint a){
        (x *= a.x) %= MOD;
        return *this;
    }
    mint operator+(const mint a) const{
        return mint(*this) += a;
    }
    mint operator-(const mint a) const{
        return mint(*this) -= a;
    }
    mint operator*(const mint a) const{
        return mint(*this) *= a;
    }
    mint pow(long long t) const{
        if(!t) return 1;
        mint a = pow(t >> 1);
        a *= a;
        if(t & 1) a *= *this;
        return a;
    }
    mint inv() const{
        return pow(MOD - 2);
    }
    mint& operator/=(const mint a){
        return *this *= a.inv();
    }
    mint operator/(const mint a) const{
        return mint(*this) /= a;
    }
    void max(){
        x = MOD - 1;
    }
    long long getValue(){
        return x;
    }
};

class coordinate{
public:
    double x, y;
    
    coordinate(double a = 0, double b = 0){
        x = a; y = b;
    }
    coordinate operator-() const{
        return coordinate(-x, -y);
    }
    coordinate& operator+=(const coordinate a){
        x += a.x; y -= a.y;
        return *this;
    }
    coordinate& operator-=(const coordinate a){
        x -= a.x; y -= a.y;
        return *this;
    }
    coordinate operator+(const coordinate a){
        return coordinate(x + a.x, y + a.y);
    }
    double dot(coordinate a){
        double ret = x * a.x + y * a.y;
        return ret;
    }
};

int main(){
    int n = 148;
    auto p = PRIME_FACTORIZATION(n);

    for(auto x : p){
        cout << x.first << ' ' << x.second << endl;
    }

    mint tmp = 3;
    tmp += 4;
    cout << tmp.getValue() << endl;
    return 0;
}

