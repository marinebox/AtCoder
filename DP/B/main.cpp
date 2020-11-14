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
    int n, k;
    cin >> n >> k;
    vint h(n);
    rep(i, n) cin >> h[i];

    vll cost(n, 0);
    for(int i = 1; i < n; i++){
        ll nextCost = 1e9;
        for(int j = 1; j <= k and j <= i; j++){
            ll tmp = abs(h[i] - h[i - j]) + cost[i - j];
            nextCost = min(tmp, nextCost);
        }
        cost[i] = nextCost;
    }
    // for(auto x : cost) cout << x << endl;

    cout << cost.back() << endl;
    return 0;
}
