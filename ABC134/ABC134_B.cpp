#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int watching = 2 * d + 1;
    int ans;

    if (n % watching == 0)
        ans = n / watching;
    else
        ans = n / watching + 1;
    
    cout << ans << endl;
    return 0;
}