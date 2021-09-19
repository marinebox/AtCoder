#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    bool isH = false;
    for(int i = 0; i < len; i++){
        if(s[i] == 'h'){
            isH = true;
        }
        else if(isH and s[i] == 'i'){
            isH = false;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }

    if(isH){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}