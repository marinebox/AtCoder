// Algae
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, d, x;
    cin >> r >> d >> x;

    for (int tsumugi = 0; tsumugi < 10; tsumugi++){
        x = (r * x - d);
        cout << x << endl;
    }
    
    return 0;
}