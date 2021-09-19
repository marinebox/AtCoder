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
    int n;
    cin >> n;
    vector<pair<int, int>> dots(n);
    for(auto &c : dots){
        cin >> c.first >> c.second;
    }

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int delx = dots[j].first - dots[i].first;
            int dely = dots[j].second - dots[i].second;
            // cout << "x: " << delx << " y: " << dely << endl;
            if(delx >= 0){
                if(dely <= delx && dely >= -delx) ans++;
            }
            else{
                delx *= -1;
                if(dely <= delx && dely >= -delx) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
