#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> s;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        s[tmp] = 0;
    }

    auto ans = s.size();
    cout << ans << endl;
    return 0;
}