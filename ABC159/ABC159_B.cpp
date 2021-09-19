#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size() - 1;

    for(int i = 0; i < n; i++){
        if(s[i] != s[n - i]){
            cout << "No" << endl;
            return 0;
        }
    }

    for(int i = 0; i < (n - 1) / 2; i++){
        if(s[i] != s[(n - 1) / 2 - i]){
            cout << "No" << endl;
            return 0;
        }
    }

    for(int i = (n + 3) / 2 - 1; i < n; i++){
        if(s[i] != s[n - i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}