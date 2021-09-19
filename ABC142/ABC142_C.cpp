#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair <int, int> > a(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        int tmp;
        cin >> tmp;
        a[tsumugi] = make_pair(tmp, tsumugi + 1);
    }
    
    sort(a.begin(), a.end());
    for (int karen = 0; karen < n; karen++){
        cout << a[karen].second << " ";
    }

    return 0;    
}