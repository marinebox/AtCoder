#include <bits/stdc++.h>
using namespace std;

int main(){
    int m1, d1, m2, d2;
    cin >> m1 >> d1;
    cin >> m2 >> d2;

    int ans;
    if(m1 == m2){
        ans = 0;
    }
    else{
        ans = 1;
    }

    cout << ans << endl;
    return 0;
}