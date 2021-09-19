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

double calc(double x, double y){
    double ret;
    ret = pow(x, 2) + pow(y, 2);
    ret = sqrt(ret);
    return ret;
}

int main(){
    int n, d;
    cin >> n >> d;
    // vector<int> x(n), y(n);
    int ans = 0;
    rep(i, n){
        // cin >> x[i] >> y[i];
        double x, y;
        cin >> x >> y;
        double tp;
        tp = calc(x, y);
        if(tp <= d) ans++;
    }

    cout << ans << endl;
    return 0;
}
