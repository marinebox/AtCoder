#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    string s;
    cin >> s;

    //色が違うところを数え上げる
    int ans = 0;
    char c = s[0];
    for(int i = 1; i < s.size(); i++){
        char tmp = s[i];
        if(tmp != c){
            ans++;
            c = tmp;
        }
    }

    cout << ans << endl;
    return 0;
}