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
    vector<long long> a(n);
    rep(i, n){
        cin >> a[i];
        if(a[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }

    long long ans = 1;
    const long long LIMIT = 1e18;

    rep(i, n){
        // long long tmp = ans;
        // ans *= a[i];
        // long long t1 = ans / a[i];
        // if(t1 != tmp or ans > LIMIT){
        //     cout << -1 << endl;
        //     return 0;
        // }
        long long tmp = LIMIT / ans;
        tmp++;
        // if(a[i] > tmp){
        //     cout << -1 << endl;
        //     return 0;
        // }
        ans *= a[i];
        if(ans > LIMIT || a[i] > tmp){
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;
    return 0;
}
