#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;


int main(){
    int n, Y;
    cin >> n >> Y;

    for(int x = 0; x <= n; x++){
        for(int y = 0; y <= n - x; y++){
            int z = n - x - y;
            int tmp = 10000 * x + 5000 * y + 1000 * z;
            if(tmp == Y){
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
