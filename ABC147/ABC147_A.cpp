#include <bits/stdc++.h>
using namespace std;

int main(){
    int tmp, sum = 0;
    for (int tsumugi = 0; tsumugi < 3; tsumugi++){
        cin >> tmp;
        sum += tmp;
    }

    string ans;
    if (sum >= 22){
        ans = "bust";
    }
    else{
        ans = "win";
    }
    cout << ans << endl;
    return 0;
}