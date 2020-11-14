#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        char tmp;
        cin >> tmp;
        if(tmp == 'Y'){
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << "Three" << endl;
    return 0;
}