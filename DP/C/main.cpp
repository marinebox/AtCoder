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
    vvint acts(n, vint(3));
    rep(i, n){
        rep(j, 3){
            cin >> acts[i][j];
        }
    }

    vvint happy(n, vint(3, 0));
    rep(i, 3){
        happy[0][i] = acts[0][i];
    }
    for(int i = 1; i < n; i ++){
        auto x = acts[i];
        int a, b, c;
        a = x[0];
        b = x[1];
        c = x[2];
        happy[i][0] = max(happy[i - 1][1] + a, happy[i - 1][2] + a);
        happy[i][1] = max(happy[i - 1][0] + b, happy[i - 1][2] + b);
        happy[i][2] = max(happy[i - 1][0] + c, happy[i - 1][1] + c);
    }

    cout << *max_element(happy.back().begin(), happy.back().end()) << endl;
    return 0;
}
