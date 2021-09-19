#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map <string, int> s;
    string temp;
    long long ans = 0;

    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> temp;
        sort(temp.begin(), temp.end());
        ans += s[temp];
        s[temp]++;
    }

    cout << ans << endl;
    return 0;
}