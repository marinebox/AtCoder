#include <bits/stdc++.h>
using namespace std;

int calcNums(int n){
    int ans = 0;
    while(n){
        // cout << n << endl;
        ans += n % 10;
        n /= 10;
    }
    // cout << ans << endl;
    return ans;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        // cout << i << endl;
        int tmp = calcNums(i);
        if(tmp >= a and tmp <= b){
            ans += i;
        }
    }

    cout << ans << endl;
    return 0;
}