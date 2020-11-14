#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
        b[tsumugi] = a[tsumugi];
    }

    sort(b.begin(), b.end());

    int count = 0;
    for (int matsuri = 0; matsuri < n; matsuri++){
        if (a[matsuri] != b[matsuri]){
            count++;
        }
    }
    
    if (count == 2 || count == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}