#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;

    int ans = 1;
    for(int i = 0; i < 8; i++){
        if(pow(2, i) <= n){
            ans = pow(2, i);
        }
        else{
            break;
        }
    }

    cout << ans << endl;
    return 0;
}