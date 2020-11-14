#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> s(m);
    vector<char> c(m);
    for(int i = 0; i < m; i++){
        cin >> s[i] >> c[i];
    }

    string ans;
    for(int i = 0; i < n; i++){
        ans.push_back('x');
    }

    for(int i = 0; i < m; i++){
        if(ans[s[i] - 1] == 'x'){
            ans[s[i] - 1] = c[i];
        }
        else{
            if(ans[s[i] - 1] != c[i]){
                cout << "-1" << endl;
                return 0;
            }
        }
    }

    if(n != 1 && ans[0] == '0'){
        cout << "-1" << endl;
        return 0;
    }
    if(n == 1 && ans[0] == 'x'){
        ans[0] = '1';
    }
    if(n != 1 && ans[1] == 'x'){
        ans[1] = '0';
    }
    if(n == 3 && ans[2] == 'x'){
        ans[2] = '0';
    }

    cout << ans << endl;
    return 0;
}