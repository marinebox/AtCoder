#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> p[tsumugi];
    }

    int leftMin = p[0];
    int ans = 1;    //一番左は必ず条件を満たす
    for(int i = 1; i < n; i++){
        leftMin = min(leftMin, p[i - 1]);
        if(leftMin >= p[i]){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}