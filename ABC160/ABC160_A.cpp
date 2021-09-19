#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "Yes";
    if(s[2] != s[3]){
        ans = "No";
    }
    if(s[4] != s[5]){
        ans = "No";
    }

    cout << ans << endl;
    return 0;
}