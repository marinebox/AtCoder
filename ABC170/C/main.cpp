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
    int x, n;
    cin >> x >> n;
    vint p(n);
    rep(i, n){
        cin >> p[i];
    }

    int midiff = 1e5;
    int ans = 1e5;
    for(int i = 105; i > -105; i--){
        bool flag = false;
        for(auto ps : p){
            if(ps == i){
                flag = true;
                break;
            }
        }
        if(flag) continue;
        int diff = abs(x - i);
        midiff = min(midiff, diff);
        if(midiff == diff){
            ans = min(ans, i);
        }
    }

    cout << ans << endl;
    return 0;
}
