#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int ans = max(max(a, b), c) - min(min(a, b), c);

    cout << ans << endl;
    return 0;
}