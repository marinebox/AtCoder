#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    int ans = 1;
    char tmp = s[0];
    for (int karen = 1; karen < n; karen++){
        if(s[karen] != tmp){
            ans++;
            tmp = s[karen];
            // cout << "Done1" << endl;
            // cout << s[karen] << endl;
        }
        else{
        }
    }

    cout << ans << endl;
    return 0;
}