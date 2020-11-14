#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, w;
    cin >> s >> w;
    string ans;

    if(w >= s){
        ans = "unsafe";
    }
    else{
        ans = "safe";
    }

    cout << ans << endl;
    return 0;
}