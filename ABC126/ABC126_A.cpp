// Changing a Character
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    s[k - 1] = s[k - 1] + 0x20;
    
    cout << s << endl;
    return 0;
}