#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<long long> mods(2019, 0);
    mods[0]++;
    int num = 0;
    int digit = 1;
    
    for(auto i = s.rbegin(); i != s.rend(); i++){
        int tmp = *i - '0';
        num = (num  + tmp * digit) % 2019;
        digit = digit * 10 % 2019;
        mods[num]++;
    }

    long long ans = 0;
    for(auto x : mods){
        ans += x * (x - 1) / 2;
    }

    cout << ans << endl;
    return 0;
}