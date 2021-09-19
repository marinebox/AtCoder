#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
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


int h, w, k;
vector<vector<char>> c;

vector<vector<bool>> TFcombination(int n){
    vector<vector<bool>> ans(pow(2, n), vector<bool>(n));
    for(int i = 0; i < (1 << n); i++){
        for(int j = 0; j < n; j++){
            ans[i][j] = i >> j & 1;
        }
    }
    return ans;
}

bool cnt(vector<bool> s1, vector<bool> s2){
    int blk = 0;
    bool ans = false;
    rep(i, h){
        rep(j, w){
            auto x = c[i][j];
            if(!s1[i] && !s2[j] && x == '#'){
                blk++;
            }
        }
    }
    if(blk == k){
        ans = true;
    }
    return ans;
}

int main(){
    cin >> h >> w >> k;
    rep(i, h){
        vector<char> tp;
        rep(i, w){
            char tmp;
            cin >> tmp;
            tp.push_back(tmp);
        }
        c.push_back(tp);
    }

    auto seth = TFcombination(h);
    auto setw = TFcombination(w);
    int ans = 0;

    for(auto s1 : seth){
        for(auto s2 : setw){
            if(cnt(s1, s2)){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}