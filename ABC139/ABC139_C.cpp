// Lower
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <long long> h(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> h[tsumugi];
    }
    
    long long ans = 0;
    long long temp = 0;

    for (int matsuri = 0; matsuri < n -1; matsuri++){
        if (h[matsuri] >= h[matsuri + 1]){
            temp++;
            // cout << "Done 1" << endl;
        }
        else{
            ans = max(ans, temp);
            temp = 0;
        }
    }
    ans = max(ans, temp);

    cout << ans << endl;
    return 0;
}