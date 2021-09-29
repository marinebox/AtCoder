#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

vector<vector<bool>> TFcombination(int n){
    vector<vector<bool>> ans(pow(2, n), vector<bool>(n));
    for(int i = 0; i < (1 << n); i++) for(int j = 0; j < n; j++) ans[i][j] = i >> j & 1;
    return ans;
}

int main(){
    int d, g;
    cin >> d >> g;
    vector<ll> p(d), c(d);
    for(int i = 0; i < d; i++) cin >> p[i] >> c[i];

    auto isPerfect = TFcombination(d);
    int ans = 1e9;
    for(auto x : isPerfect){
        int obtained_score = 0;
        int temp_ans = 0;
        int unsolved_highest_problem_num = 0;
        rep(i, d){
            if(x[i]){
                obtained_score += (100 * (i + 1) * p[i] + c[i]);
                temp_ans += p[i];
            }
            else unsolved_highest_problem_num = i;
        }
        if(obtained_score < g){
            for(int i = 0; i < p[unsolved_highest_problem_num]; i++){
                obtained_score += 100 * (unsolved_highest_problem_num + 1);
                temp_ans++;
                if(obtained_score >= g) break;
            }
        }
        if(obtained_score >= g) ans = min(ans, temp_ans);
    }

    cout << ans << endl;
    return 0;
}