#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }

    int num = 0;
    int ans = 0;
    for (int karen = 0; karen < n; karen++){
        if (a[karen] == (num + 1)){
            num++;
        }
    }
    if (num == 0){
        ans = -1;
    }
    else{
        ans = n - num;
    }

    cout << ans << endl;
    return 0;
}