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
    int n;
    cin >> n;
    vint h(n);
    rep(i, n){
        cin >> h[i];
    }

    vint cost(n, 0);
    cost[1] = abs(h[1] - h[0]);

    for(int i = 2; i < n; i++){
        int d1, d2;
        d1 = abs(h[i] - h[i - 1]) + cost[i - 1];
        d2 = abs(h[i] - h[i - 2]) + cost[i - 2];
        // cout << d1 << endl;
        // cout << d2 << endl;
        cost[i] = min(d1, d2);
    }
    // for(auto x : cost) cout << x << endl;

    cout << cost.back() << endl;
    return 0;
}
