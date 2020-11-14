#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    string s;
    cin >> s;
    //後ろからやる
    reverse(s.begin(), s.end());
    vector<string> t(4);
    t[0] = "dream";
    t[1] = "dreamer";
    t[2] = "erase";
    t[3] = "eraser";
    for(int i = 0; i < 4; i++){
        reverse(t[i].begin(), t[i].end());
    }

    

    cout << "YES" << endl;
    return 0;
}