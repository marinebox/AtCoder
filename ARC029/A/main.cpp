#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;

vector<vector<bool>> TFcombination(int n){
    vector<vector<bool>> ans(pow(2, n), vector<bool>(n));
    for(int i = 0; i < (1 << n); i++){
        for(int j = 0; j < n; j++){
            ans[i][j] = i >> j & 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> t(n);
    rep(i, n){
        cin >> t[i];
    }

    vector<vector<bool>> isBaker1 = TFcombination(n);
    int time = 1e9;
    for(auto x : isBaker1){
        int time1 = 0;
        int time2 = 0;
        for(int i = 0; i < n; i++){
            if(x[i]){
                time1 += t[i];
            }
            else{
                time2 += t[i];
            }
        }
        time = min(time, max(time1, time2));
    }

    cout << time << endl;
    return 0;
}
