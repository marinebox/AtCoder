#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    double a, b, h, m;
    cin >> a >> b >> h >> m;
    
    double hourX, hourY, minuteX, minuteY;
    double hourRad, minuteRad;

    hourRad = 2 * M_PI / 12 * (h + m / 60);
    minuteRad = 2 * M_PI / 60 * m;

    hourX = a * cos(M_PI / 2 - hourRad);
    hourY = a * sin(M_PI / 2 - hourRad);
    minuteX = b * cos(M_PI / 2 - minuteRad);
    minuteY = b * sin(M_PI / 2 - minuteRad);

    double ans;
    ans = pow(hourX - minuteX, 2) + pow(hourY - minuteY, 2);
    ans = pow(ans, 0.5);

    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}