#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        long long num = b - a + 1;
        long long tmp = (a + b) * num / 2;
        ans += tmp;
    }

    cout << ans << endl;
    return 0;
}