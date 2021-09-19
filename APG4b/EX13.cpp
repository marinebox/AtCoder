#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }

    int avg = accumulate(a.begin(), a.end(), 0) / a.size();
    for(int karen = 0; karen < n; karen++){
        int diff = abs(avg - a[karen]);
        cout << diff << endl;
    }

    return 0;
}