#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int tmp = a * b;
    string ans;
    if(tmp % 2 == 0){
        ans = "Even";
    }
    else{
        ans = "Odd";
    }

    cout << ans << endl;
    return 0;
}