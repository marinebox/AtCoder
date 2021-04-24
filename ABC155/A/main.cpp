#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using namespace atcoder;
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
    int a, b, c;
    cin >> a >> b >> c;

    string ans = YES;
    if(a == b && b == c && c == a) ans = NO;
    if(a != b && b != c && c != a) ans = NO;

    cout << ans << endl;
    return 0;
}
