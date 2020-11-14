#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size();
    int ans = 1;
    // cout << ans << endl;
    for(int karen = 1; karen <= len / 2; karen++){
        if(s[karen * 2 - 1] == '+'){
            ans += 1;
        }
        else{
            ans -= 1;
        }
        // cout << ans << endl;
    }

    cout << ans << endl;
    return 0;
}
