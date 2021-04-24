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


int main(){
    string a, b;
    cin >> a >> b;

    int ans = 0;
    int tmp = 0;
    for(auto c : a){
        int num = c - '0';
        tmp += num;
    }
    ans = tmp;
    tmp = 0;
    for(auto c : b){
        int num = c - '0';
        tmp += num;
    }
    ans = max(ans, tmp);

    cout << ans << endl;
    return 0;
}
