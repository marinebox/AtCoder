#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;

    long long amountOf500, amountOf5;
    long long ans = 0;

    amountOf500 = x / 500;
    ans += 1000 * amountOf500;
    x -= amountOf500 * 500;
    amountOf5 = x / 5;
    ans += 5 * amountOf5;

    cout << ans << endl;
    return 0;
}