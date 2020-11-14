#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int keta = 0;//桁数を求める
    if (n < 10)
        keta = 1;
    else if (n < 100)
        keta = 2;
    else if (n < 1000)
        keta = 3;
    else if (n < 10000)
        keta = 4;
    else if (n < 100000)
        keta = 5;
    else
        keta = 6;
    
    int ans;
    switch (keta){
        case 1:
            ans = n;
            break;
        case 2:
            ans = 9;
            break;
        case 3:
            ans = 9;
            ans += (n - 100 + 1);
            break;
        case 4:
            ans = 909;
            break;
        case 5:
            ans = 909;
            ans += (n - 10000 + 1);
            break;
        case 6:
            ans = 90909;
            break;
    }
    cout << ans << endl;
    return 0;
}