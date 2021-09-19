#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t;
    cin  >> a >> b >> t;

    int def = b - a;
    int ans = b + def;
    while (ans < t){
        ans += def;
    }

    cout << ans << endl;
    return 0;
}