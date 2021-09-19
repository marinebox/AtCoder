#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
using namespace std;
// using namespace atcoder;
using ll = __int64_t;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;
using dint  = deque<int>;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> numbers(n + 1, 0);
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        numbers[tmp]++;
    }

    ll allans = 0;
    for(auto n : numbers){
        allans += n * (n - 1) / 2;
    }
    for(auto ca : a){
        ll ans = allans;
        ans -= (numbers[ca] - 1);
        cout << ans << endl;
    }

    return 0;
}