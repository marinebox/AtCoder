#include <bits/stdc++.h>
using namespace std;

void out(char a, char b){
    for(int i = 0; i < (b - '0'); i++){
        cout << a;
    }
    cout << endl;
    return;
}

int main(){
    char a, b;
    cin >> a >> b;

    string s;
    if(a < b){
        out(a, b);
    }
    else{
        out(b, a);
    }
    // else{
    //     s = a * a;
    // }

    // cout << s << endl;
    return 0;
}