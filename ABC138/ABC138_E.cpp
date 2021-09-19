#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    vector <vector <int>> a(26, vector <int>(0));

    for (int tsumugi = 0; tsumugi < t.size(); tsumugi++){
        if(a[t[tsumugi] - 'a'].empty()){
            for (int matsuri = 0; matsuri < s.size(); matsuri++){
                if (t[tsumugi] == s[matsuri]){
                    a[t[tsumugi] - 'a'].push_back(matsuri);
                }
            }
        }
    }

    long long ans = 0;
    int now = 0;
    for (int kaori = 0; kaori < t.size(); kaori++){

    }
}