#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, l, r;
    cin >> s >> l >> r;
    int ans;
    if(s >= l && s <= r){
        ans = s;
    }
    else if(s < l){
        ans = l;
    }
    else{
        ans = r;
    }

    cout << ans << endl;
    return 0;
}