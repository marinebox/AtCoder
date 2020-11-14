#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, k;
    cin >> a >> b >> k;

    if (a + b <= k){
        a = 0;
        b = 0;
    }
    else if (a >= k){
        a -= k;
    }
    else{
        // a = 0;
        b -= (k - a);
        a = 0;
    }

    cout << a << " " << b << endl;
    return 0;
}