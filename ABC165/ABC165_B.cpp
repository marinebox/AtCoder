#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;

    long long money = 100;
    long long ans = 0;
    while(money < x){
        money *= 1.01;
        ans++;
    }

    cout << ans << endl;
    return 0;
}