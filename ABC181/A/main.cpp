#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string ans = "White";
    if(n % 2 == 1) ans = "Black";

    cout << ans << endl;
    return 0;
}