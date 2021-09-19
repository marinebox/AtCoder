#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b, c, d, e;
    cin >> n >> a >> b >> c >> d >> e;

    long long neck = min({a, b, c, d, e});
    long long times = n / neck;
    if (n % neck != 0){
        times++;
    }

    cout << times + 4 << endl;
    return 0;
}