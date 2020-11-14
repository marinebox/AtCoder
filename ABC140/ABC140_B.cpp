#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n), b(n), c(n - 1);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }
    for (int matsuri = 0; matsuri < n; matsuri++){
        cin >> b[matsuri];
    }
    for (int kaori = 0; kaori < n - 1; kaori++){
        cin >> c[kaori];
    }

    int ans = 0;
    int meal;
    int beforemeal = 100;
    for (int karen = 0; karen < n; karen++){
        meal = a[karen];
        ans += b[meal - 1];
        if (beforemeal + 1 == meal){
            ans += c[beforemeal - 1];
        }
        beforemeal = meal;
        // cout << "Ans:" << ans << endl;
    }

    cout << ans << endl;
    return 0;
}