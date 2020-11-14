#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long rs = 0, gs = 0, bs = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            rs++;
        }
        else if(s[i] == 'G'){
            gs++;
        }
        else{
            bs++;
        }
    }
    long long ans = rs * gs * bs;
    for(int i = 0; i < n - 2; i++){
        int tmp= 1;
        while(1){
            if(i + tmp * 2 >= n){
                break;
            }
            if(s[i] != s[i + tmp] and s[i + tmp] != s[i + tmp * 2] and s[i + tmp * 2] != s[i]){
                ans--;
            }
            tmp++;
        }
    }

    cout << ans << endl;
    return 0;
}