#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long tmp1 = n % k;
    long long tmp2 = abs(tmp1 - k);

    long long ans = min(tmp1, tmp2);

    cout << ans << endl;
    return 0;
}