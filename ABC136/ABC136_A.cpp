#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin  >> a >> b >> c;

    int del = a - b;
    int move = c - del;

    int ans;

    if (del >= c){
        ans = 0;
    }
    else{
        ans = c - del;
    }

    cout << ans << endl;
    return 0;
}