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


int main(){
    int n, k;
    cin >> n >> k;
    vector<vector<ll>> t(n, vector<ll>(n));
    for(auto &ti : t) cinvec(ti);

    vector<int> num(n);
    rep(i, n) num[i] = i;
    num.emplace_back(0);

    int ans = 0;
    do{
        int tmp = 0;
        int previous;
        int next;
        for(int i = 1; i <= n; i++){
            previous = num[i - 1];
            next = num[i];
            tmp += t[previous][next];
        }
        if(tmp == k) ans++;
        // cout << tmp << endl;
    }while(next_permutation(num.begin() + 1, num.end() - 1));
    
    cout << ans << endl;
    return 0;
}
