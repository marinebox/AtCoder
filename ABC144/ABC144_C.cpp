#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long n_sqrt = pow(n, 0.5);

    long long i,j;
    for (long long karen = n_sqrt; karen > 0; karen--){
        if (n % karen == 0){
            i = karen;
            j = n / karen;
            break;
        }
    }
    long long ans;
    ans = i + j - 2;

    cout << ans << endl;
    return 0;
}