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

int main(){
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        string base10 = to_string(i);
        bool flag = true;
        for(auto c : base10){
            if(c == '7') flag = false;
        }
        if(!flag) continue;
        stringstream ss;
        ss << oct << i;
        string base8 = ss.str();
        for(auto c : base8){
            if(c == '7') flag = false;
        }
        if(!flag) continue;
        if(flag) ans ++;
    }

    cout << ans << endl;
    return 0;
}
