#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int ans;
    if (a > 9 or b > 9){
        ans = -1;
    }
    else{
        ans = a * b;
    }

    cout << ans << endl;
    return 0;
}