#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x;
    cin >> a >> b >> x;
    int v = a * a * b;
    //xが容積の半分かどうかで処理が変わる

    double ans;
    if (x <= v / 2){
        int h = 2 * x / a / b;
        ans = (atan(b / h) / M_PI * 180);
    }

    cout << ans << endl;
    return 0;
}