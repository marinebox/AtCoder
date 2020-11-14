#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    string w;
    cin >> w;

    vector<int> alphabet(26, 0);
    
    for(auto i = w.begin(); i != w.end(); i++){
        alphabet[*i - 'a']++;
    }
    
    for(auto x : alphabet){
        if(x % 2 == 1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}