#include <bits/stdc++.h>
using namespace std;

int main(){
    long long W, H, x, y;
    cin >> W >> H >> x >> y;
    double area = W * H;

    int ways = 0;
    if (W % 2 == 0 and x == W / 2){
        if (H % 2 == 0 and y == H / 2){
            ways = 1;
        }
    }

    cout << area / 2 << " " << ways << endl;
    return 0;
}