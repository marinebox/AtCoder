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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ans = 0;
    // if(b < 0){
    //     // if(c < 0){
    //         // ans = a * c;
    //     // }
    //     ans = a * c;
    // }

    ll a1, a2, a3, a4;
    a1 = a * c;
    a2 = a * d;
    a3 = b * c;
    a4 = b * d;
    ans = max(a1, max(a2, max(a3, a4)));

    cout << ans << endl;
    return 0;
}
