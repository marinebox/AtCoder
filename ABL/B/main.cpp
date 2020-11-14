#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

const string YES = "Yes";
const string NO = "No";

int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    string ans  = YES;

    if(b < c || d < a) ans = NO;

    coa;
}
