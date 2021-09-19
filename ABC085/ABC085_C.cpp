#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    long long y;
    cin >> n >> y;

    int a, b, c;
    long long tmp;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n - i; j++){
            int k = n - i - j;
            tmp = 10000 * i + 5000 * j + 1000 * k;
            if(tmp == y){
                a = i;
                b = j;
                c = k;
                cout << a << " " << b << " " << c << endl;
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << " " << endl;
    return 0;
}