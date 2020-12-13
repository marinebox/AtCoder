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

const string YES = "Yes";
const string NO = "No";

int main(){
    ll n, m, t;
    cin >> n >> m >> t;

    ll presentBattery = n;
    ll presentTime = 0;
    string ans = YES;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        presentBattery -= (a - presentTime);
        if(presentBattery <= 0){
            ans = NO;
            break;
        }
        // charge
        presentBattery += (b - a);
        if(presentBattery > n) presentBattery = n;
        presentTime = b;
    }
    // go home
    presentBattery -= (t - presentTime);

    if(presentBattery <= 0) ans = NO;

    cout << ans << endl;
    return 0;
}
