#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    string ans = "No";
    if(a == b and b != c){
        ans = "Yes";
    }
    if(b == c and c != a){
        ans = "Yes";
    }
    if(c == a and a != b){
        ans = "Yes";
    }


    cout << ans << endl;
}