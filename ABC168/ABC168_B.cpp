#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int k;
    string s;
    cin >> k >> s;

    if(s.size() <= k){
        cout << s << endl;
        return 0;
    }
    else{
        for(int i = 0; i < k; i++){
            cout << s[i];
        }
        cout << "..." << endl;
        return 0;
    }
}