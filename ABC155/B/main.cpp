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

const string APP = "APPROVED";
const string DEN = "DENIED";

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    string ans = APP;
    for(auto x : a){
        if(x % 2 != 0) continue;
        else{
            if(x % 3 != 0 && x % 5 != 0){
                ans = DEN;
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
