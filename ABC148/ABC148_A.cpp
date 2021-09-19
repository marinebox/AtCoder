#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int ans;
    for (int i = 1; i < 4; i++){
        if (i != a){
            if (i != b)
                ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}