#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

vector<vector<bool>> TFcombination(int n){
// 総当りで組み合わせを考えるときのboolセットを作成します。
    vector<vector<bool>> ans(pow(2, n), vector<bool>(n));
    for(int i = 0; i < (1 << n); i++){
        for(int j = 0; j < n; j++){
            ans[i][j] = i >> j & 1;
        }
    }
    return ans;
}

int main(){
    string n;
    cin >> n;

    int ans = 0;
    auto set = TFcombination(n.size());
    for(auto comb : set){
        int tmp = 0;
        int tnum = 0;
        for(int i = 0; i < n.size(); i++){
            if(comb[i]){
                tnum++;
                tmp += n[i] - '0';
            }
            if(tmp % 3 == 0){
                ans = max(ans, tnum);
            }
        }
    }

    if(ans != 0){
        ans = n.size() - ans;
    }
    else{
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}
