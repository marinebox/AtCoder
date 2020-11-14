#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 or i % 5 == 0){
            continue;
        }
        ans += i;
    }

    cout << ans << endl;
    return 0;
}