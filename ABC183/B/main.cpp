#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

struct coordinate{
    double x, y;
};

int main(){
    coordinate s, g;
    cin >> s.x >> s.y >> g.x >> g.y;

    double distX = g.x - s.x;
    double distY = g.y + s.y;

    double rate = s.y / distY;
    double ans = rate * distX + s.x;

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
