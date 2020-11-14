#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t, u;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    cin >> u;

    if(u == s){
        a--;
    }
    else{
        b--;
    }

    cout << a << " " << b << endl;
}