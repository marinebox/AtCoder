#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
using namespace std;
using namespace atcoder;
using ll = __int64_t;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;
using dint  = deque<int>;

void mark(int a, int b, vector<bool> &answers){
    for(int i = 0; i < a; i++){
        answers[i] = false;
    }
    for(int i = answers.size(); i > b; i--){
        answers[i] = false;
    }
    return;
}


int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &ai: a) cin >> ai;
    for(auto &bi: b) cin >> bi;

    vector<bool> answers(1005, true);
    mark(a[0], b[0], answers);
    for(int i = 1; i < n; i++){
        mark(a[i], b[i], answers);
    }

    int ans = 0;
    for(auto ai: answers){
        if(ai) ans++;
    }

    cout << ans << endl;
    return 0;
}
