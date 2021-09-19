#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;

    int t = n % 10;
    string ans;
    switch(t){
        case 0:
        case 1:
        case 6:
        case 8:
            ans = "pon";
            break;
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            ans = "hon";
            break;
        case 3:
            ans = "bon";
            break;
    }

    cout << ans << endl;
    return 0;
}