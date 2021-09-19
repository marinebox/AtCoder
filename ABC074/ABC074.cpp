#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> x[tsumugi];
    }

    int ans = 0;
    for(int karen = 0; karen < n; karen++){
        if(x[karen] < k / 2){
            ans += x[karen] * 2;
        }
        else{
            ans += (k - x[karen]) * 2;
        }
    }

    cout << ans << endl;
    return 0;
}