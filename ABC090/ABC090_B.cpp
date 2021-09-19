#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for(int karen = a; karen <= b; karen++){
        if(karen / 10000 != karen % 10){
            continue;
        }
        if(karen / 1000 % 10 != karen % 100 / 10){
            continue;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}