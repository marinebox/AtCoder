#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans;
    if (s == "Sunny"){
        ans = "Cloudy";
    }
    else if (s == "Cloudy"){
        ans = "Rainy";
    }
    else if (s == "Rainy"){
        ans = "Sunny";
    }

    cout << ans << endl;
    return 0;
}