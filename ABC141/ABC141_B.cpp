#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int length = s.size();
    for (int tsumugi = 0; tsumugi < length; tsumugi ++){
        if (tsumugi % 2 == 0){  //奇数文字の時
            if (s[tsumugi] == 'L'){
                cout << "No" << endl;
                return 0;
            }
        }
        else{   //偶数文字の時
            if (s[tsumugi] == 'R'){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}