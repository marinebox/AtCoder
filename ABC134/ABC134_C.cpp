#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    int maxv, maxv2;
    int index_max;

    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }
    
    for (int matsuri = 0; matsuri < n; matsuri++){
        if (a[matsuri] > maxv){
            maxv = a[matsuri];
            index_max = matsuri;
        }
    }

    a[index_max] = 0;

    for (int kaori = 0; kaori < n; kaori++){
        if (a[kaori] > maxv2){
            maxv2 = a[kaori];
        }
    }

    for (int reika = 0; reika < n; reika++){
        if (reika != index_max)
            cout << maxv << endl;
        else
            cout << maxv2 << endl;
    }

    return 0;
}