#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

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
    string s;
    cin >> s;
    vector<vector<bool>> isPlus = TFcombination(3);
    string ans;
    for(auto x : isPlus){
        int tmp = s[0] - '0';
        for(int i = 0; i < 3; i++){
            if(x[i]){
                tmp += s[i + 1] - '0';
            }
            else{
                tmp -= s[i + 1] - '0';
            }
        }
        if(tmp == 7){
            ans.push_back(s[0]);
            for(int i = 0; i < 3; i++){
                if(x[i]){
                    ans.push_back('+');
                }
                else{
                    ans.push_back('-');
                }
                ans.push_back(s[i + 1]);
            }
            ans+= "=7";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
