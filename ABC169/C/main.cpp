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

// int main(){
//     ll a;
//     double b;
//     cin >> a >> b;

//     long long bt = b * 100;
//     long long b1 = bt % 10;
//     bt /= 10;
//     long long b10 = bt % 10;
//     bt /= 10;
//     long long b100 = bt % 10;

//     long long ans100 = a * b100 * 100;
//     long long ans10 = a * b10 * 10;
//     long long ans1 = a * b1;
    
//     long long ans = ans100;
//     ans += ans10;
//     ans += ans1;

//     ans /= 100;

//     cout << ans << endl;
//     return 0;
// }

// int main(){
//     long double a, b;
//     cin >> a >> b;
    
//     long long ans = a * b;
//     cout << ans << endl;
//     return 0;
// }

int main(){
    ll a;
    string b;
    cin >> a >> b;
    string tb;
    tb.push_back(b[0]);
    tb.push_back(b[2]);
    tb.push_back(b[3]);
    int ib = stoi(tb);
    ll ans = a * ib;
    ans /= 100;

    cout << ans << endl;
    return 0;
}
