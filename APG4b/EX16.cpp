#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(5);
    for(int tsumugi = 0; tsumugi < 5; tsumugi++){
        cin >> a[tsumugi];
    }

    for(int karen = 0; karen < 4; karen++){
        if(a[karen] == a[karen + 1]){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}