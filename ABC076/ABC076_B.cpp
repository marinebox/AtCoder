#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    int ans = 1;
    for(int karen = 0; karen < n; karen++){
        if(ans < k){
            ans *= 2;
        }
        else{
            ans += k;
        }
        // cout << ans << endl;
    }

    cout << ans << endl;
    return 0;
}