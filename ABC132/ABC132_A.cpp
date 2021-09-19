#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    if (s[0] == s[1]){
        if (s[1] == s[2]){
            cout << "No" << endl;
            return 0;
        }
        else if (s[2] == s[3]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}