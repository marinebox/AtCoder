#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define cinvec(vec) for(auto &i : vec) cin >> i
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
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n - 1);
    cinvec(a);

    int present = accumulate(a.begin(), a.end(), 0);
    int goal = n * m;
    int req = goal - present;

    int ans;
    if(req < 0) ans = 0;
    else if(req > k) ans = -1;
    else ans = req;

    cout << ans << endl;
    return 0;
}
