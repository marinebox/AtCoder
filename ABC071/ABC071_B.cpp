#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;

    vector<bool> alphabet(26, false);
    for(auto c : s){
        int num = c - 'a';
        alphabet[num] = true;
    }

    string ans;
    bool flag = false;
    for(int i = 0; i < 26; i++){
        if(!alphabet[i]){
            ans += (i + 'a');
            flag = true;
        }
    }
    if(flag){
        ans = ans[0];
    }
    else{
        ans = "None";
    }

    cout << ans << endl;
    return 0;
}