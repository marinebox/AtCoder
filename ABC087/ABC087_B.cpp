#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int count = 0;

    for (int y500 = 0; y500 <= a; y500++){
        for (int y100 = 0; y100 <= b; y100++){
            for (int y50 = 0; y50 <= c; y50++){
                if (500 * y500 + 100 * y100 + 50 * y50 == x)
                    count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}